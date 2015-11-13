#if !defined(__LX_OBJECT_H)
#define __LX_OBJECT_H

#include "LXDefs.h"
#include "IStream.h"
#include "LXString.h"
#include "IValidationEventSink.h"

/**
 * \file Object.h
 *
 * Contains the definition of the Object object.
 */

namespace LX
{
class Document;

/**
 * The Object class is the base class for all of the objects in the LandXML object
 * model.
 *
 * Fundamentally the Object class provides a core set of methods that all LandXML objects
 * inherit from.  These methods include xml serialization, string serialization, parent
 * document retrieval, and object lifetime (release).  Pretty much all these methods
 * are overridden by the derived LandXML classes.
 *
 * All Object derived classes are created from the IFactory interface retrieved from the
 * parent Document.  The release method is used to destroy the object instance. 
 */
class Object
{
public:
    /**
     * The toXml method streams out the XML tag representation of the object.  This
     * representation excludes the XML headers, just the tag.  So standalone
     * this method does not generate valid XML.  The XML header and namespace
     * definitions have to prepended to this stream to make the XML valid.
     *
     * Value objects (those derived from ValueObject, ie DoubleObject, StringObject) do 
     * not have an XML representation so nothing will be streamed out for these
     * classes.
     *
     * Collection objects will serialize out a set of tags, which need a containing
     * tag to be valid.
     *
     * @param stream The stream to serialize the XML representation to.
     */
	virtual void toXml (
		IStream& stream) = 0;

    /**
     * The toStream method streams out the string representatoin of the object.  This
     * method is only overriden by value objects that have a string representation.  All
     * other objects types steam out nothing.
     *
     * @param stream The stream to serialize the string representation to.
     */
	virtual void toStream (
		IStream& stream) const = 0;

    /**
     * Returns a string representation of the object.  Again this method is only useful
     * if the object is a value object.
     *
     * @return Returns the string representation.
     */
	virtual String toString () const = 0;


    /**
     * Destroys the object.
     */
    virtual void release () = 0;

    /**
     * Returns the parent document of the object.
     *
     * @return Returns the parent document of the object.
     */
    virtual Document* getDocument () = 0;

    /**
     * The ValidityEnum is returned by the validate method and indicates the state of "validness" of the object.
     */
    enum ValidityEnum
    {
        kValid = 1,                     /**< This object and all children are valid. */
        kInvalid,                       /**< This object is invalid */
        kValidWithInvalidChildren,      /**< This object is valid but has invalid children. */
        kCollectionContainsInvalidItems  /**<This object which must be collection contains items which are invalid */
    };

    /**
     * Checks the object and any children, aggregate, or sub objects of this object for validity.  
     *
     * Validity implies such things as all required properties and values are set, names are valid, named references resolve
     * to named objects, etc..
     *
     * @param pEventSink A pointer to an object that implements the event sink interface.  All problems found are logged back to 
     *      this object via callback through this interface.
     *
     * @return A status indicating that the object valid.  Betters or sent thought the sink.
     */
    virtual ValidityEnum validate (IValidationEventSink* pEventSink) const = 0;


    typedef String IdType;

};

};

#endif