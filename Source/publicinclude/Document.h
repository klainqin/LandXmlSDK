#if !defined(__LX_DOCUMENT_H)
#define __LX_DOCUMENT_H

/**
 * \file Document.h
 *
 * Contains the definition of the Document object and some helper methods.
 */

#include "LXDefs.h"
#include "LXObjects.h"
#include "IParserEventSink.h"
#include "IFactory.h"
#include "GlobalNamedObjects.h"
#include "ilxnode.h"


namespace LX
{
class LandXML;
class Document;

LX_DECLSPEC Document* createDocumentObject ();


/**
 * The Document class represents a single landxml document.
 *
 * The Document class provides the methods to load a document from an XML stream, 
 * provieds the IFactory interface to enable creation of new objects, and returns root
 * object of the LandXML object model, and the root node of the Nodal object model.
 *
 * As stated above the Document class returns the root to two object models.  The
 * first is the standard LandXML object model, in which all the interfaces are 
 * strongly typed and there is an object representation for every entity in the
 * the LandXML schema.  The second object model is the Nodal model.  Basicaly
 * the nodal model represents the LandXMl document as a tree of ILxNodes.  Every
 * node has the same interface (ILxNode) making certain operations easier (such as
 * building trees).  It is important to note the the nodal model is a wrapper
 * around the LandXMl object model.
 *
 * WARNING!: The nodal object model is only loosely connected to the document and
 * the landxml model it was generated from.  IE  Any changes to the nodal model's underlying
 * landxml model will not cause the nodal model to be changed and will invalidate the
 * model.  The nodal model must regenerated in this case.
 *
 * Every object in the landxmlsdk object model is constructed from and refers back to 
 * a parent document.  As this implies this means objects cannot be constructed
 * using one document and added to another.  Destroying the document will destroy
 * all objects (except the nodal object).
 *
 * WARNING!: The nodal model is not destroyed when the document is destroyed.  If a document
 * is destroyed out from under the nodal model, it is invalid, however it can still be
 * destroyed and should be.
 */
class Document
{
public:
    /**
     * The loadXML parses the content refered to by the passed in URL (or filename) and constructs
     * a document from it.
     *
     * @param strURL The URL of the LandXml document.
     */
	virtual void loadXml (
		const wchar_t* strURL) = 0;

     /**
      * The loadXML parses the content refered to by the passed in URL (or filename) and constructs
      * a document from it.  This version of the loadXML method also takes IParserEventSink interface
      * which enables the parser to log parser messages (errors, info, etc) back to the caller.
      *
      * @param strURL The URL of the LandXml document.
      * @param pEventSink A pointer to the event sink which send parser messages.
      */
	virtual void loadXml (
		const wchar_t* strURL, 
		IParserEventSink* pEventSink) = 0;

    virtual	LandXML* loadDataFromDOMTree(XERCES_CPP_NAMESPACE::DOMDocument* doc) = 0;

    /**
     * Builds the nodal object model from the LandXML model.  The document must have a root object
     * for this call to work (ie either parsed using the loadXML or constructed manually).  The
     * nodal object is constructed.  Again if the underlying LandXMl model changes then the nodal
     * model is invalid, and should be destroyed and regenerated.
     *
     * @return Returns the root node.
     */
	virtual ILxNode* generateNodeTree () const = 0; 

    /**
     * Returns the root LandXML model object, which is the LandXML object.
     *
     * @return Returns the LandXML object.
     */
    virtual LandXML* rootObject () const = 0;

    /**
     * Set the root LandXML object, and returns the old.
     *
     * @param The new root object.
     *
     * @return Returns the LandXML object.
     */
    virtual LandXML* setRootObject (LandXML* pRootObj) = 0;

    /**
     * Returns the IFactory interface used to construct all the LandXML objects.
     *
     * @return Returns the IFactory interface.
     */
    virtual IFactory* getFactory () = 0;

    /**
     * Serializes the document out as XML.
     *
     * @param stream The stream to serialize the XML to.
     */
	virtual void toXml (
		IStream& stream) = 0;

    /**
     * Returns the GlobalNamedObject class which contains the collections of all the objects
     * than have ids which have global scope (global across the landxml model for that specific object type).
     *
     * @return Returns the GlobalNamedObjects.
     */
    virtual GlobalNamedObjects& getGlobalObjects () = 0;

    /**
     * Destroys the document and all its objects.
     */
    virtual void release () = 0;
	    /**
     * Releases the Xerces DOM document
     *
     * @return release status of the Xerces DOM document object.
     */
	virtual short releaseDOMDocument() = 0;

	    /**
     * Returns the Xerces DOM document
     *
     * @return the Xerces DOM document object.
     */
	virtual XERCES_CPP_NAMESPACE::DOMDocument* getDOMDocument() = 0;

};


};

#endif


