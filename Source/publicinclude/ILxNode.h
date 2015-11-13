#if !defined(__ILXNODE_H)
#define __ILXNODE_H

#include "LXDefs.h"
#include "LXString.h"
#include "Object.h"
#include "ValueObject.h"

namespace LX
{
/**
 * The ILxNode interface represents a single node in the tree formed by the 
 * nodel model of the SDK.
 *
 * The SDK's node model is a thin layer on top of the object model that puts a common
 * interface on top of very object, value, and collection.  This model makes the object 
 * model look like a tree of ILxNode interfaces. 
 *
 * This model originated as a auxiliary test harness, whose usefullness was important
 * enough to fold into the primary SDK itself.  The node model is very good at building
 * UIs and performing recursive tree type operations.
 *
 * The CDocument::generateNodeModel() call is used to construct the node model from the 
 * object model.  The node model will not be destroyed when the document is destroyed, it has
 * to be destroyed explicitly.   If a document that generated the node model is destroyed, then 
 * the node model is invalid and will generate runtime errors if used.  Multiple node models
 * can be generated from a single document.  Node models ARE NOT SYNCHRONIZED with the object model.
 * If an object gets removed or destroyed from the object model, then the node model will contain an 
 * invalid node or reference (unless explicitly removed).
 */
class ILxNode
{
public:
    /**
     * Gets a child of this node by index.
     *
     * @param nIndex The index of the child to return.
     *
     * @return A pointer to the the child node at the given index.
     */
	virtual ILxNode* getChild (int nIndex) const = 0;

    /**
     * Gets the name of the node.
     *
     * The name of the node is the same as the name of the object or the name of the value that 
     * node references.
     *
     * @return The name of the node.
     */
	virtual String nodeName() const = 0;

    /**
     * Indicates that node refers to an object or property that has a simple value.
     *
     * @return True if the node has a value.
     */
	virtual bool hasValue() const = 0;

    /**
     * Indicates that the value refered to by the node has been set, or is not nothing.
     *
     * The node must have a value before it can be set, therefore this method will only
     * work if the hasValue() returns true.
     *
     * @return True if the node's value is set.
     */
	virtual bool isValueSet() const = 0;

    /**
     * Returns a String representation of the node's value.
     *
     * This method only works if the isValueSet() method returns true.
     *
     * @return The string representation of the node's value.
     */
	virtual String getValue() const = 0;

    /**
     * Indicates that this node refers to a collection in the object model.  The children nodes of
     * this node refer to the items in the collection.
     *
     * @return True if the node refers to a collection.
     */
	virtual bool isCollection () const = 0;

    /**
     * Returns the number of children in the node.
     *
     * @return The number of children in the node.
     */
	virtual int numberChildren () const = 0;

    /**
     * Returns the child node whose refered object's id matches the passed string.
     *
     * This method only will work if the isCollection() method returns true AND if 
     * children nodes refer to named objects.  If the underlying object's id uses
     * something other than a string, then use the string representation of the id.
     *
     * @param strObjectId The string representation of the object id.
     */
    virtual ILxNode* findChild (const String& strObjectId) const = 0;

    /**
     * Returns a pointer to the refered object.  
     *
     * Only valid for nodes that refer to objects and collections.  Most value nodes
     * will only return NULL (unless its an object with a value such as a PointType).
     *
     * @return The pointer to the object.
     */
    virtual Object* getObject () const = 0;

    /**
     * Removes the child at the given index.
     *
     * @param nIndex The index of the child to remove.
     *
     * @return A pointer to the object removed.
     */
    virtual ILxNode* removeChild (int nIndex) = 0;

    /**
     * Sets the value of the value referred to by the value node.
     *
     * This method is only valid if the hasValue() returns true.
     * Use the string representation of the value, it will be parsed into the correct type.
     *
     * @param The string representation of the value.
     *
     * @param Returns true if the value was correctly set.
     */
    virtual bool setValue (const String* pstrValue) = 0;

    /**
     * Destroy this node and its children.
     *
     * This has no impact on the underlying object model.
     */
    virtual void release () = 0;
};
}; // End namespace LX

#endif //__ILXNODE_H