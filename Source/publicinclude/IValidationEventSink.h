#if !defined(__LX_IVALIDATEEVENTSINK_H)
#define __LX_IVALIDATEEVENTSINK_H

/**
 * \file IValidationEventSink.h
 *
 * Contains the definition of the IValidationEventSink interface.
 */

#include "LXDefs.h"

namespace LX
{

class Object;

/**
 * The IValidationEventSink interface represents a callback interface that is passed
 * to the validate method of the Document and Object derived classes.
 *
 * This interface enables a derived object to receive event pertaining the validation of 
 * objects within the Object::validate method.
 */
class IValidationEventSink
{
public:
	enum EventCode
	{
		kOk = 1,                                /**< Everything is ok */
        kRequiredValueNotSet,                   /**< Required value is not set */
        kRequiredObjectNotSet,                  /**< Required object is not set */
        kUnresolvableReference,                 /**< Name reference does not resolve to a named object */
        kCollectionContainsInvalidItem          /**< Collection contains an invalid item */
	};


	enum ActionCode
	{
		kContinue = 1,                          /**< Tells the validate to continue processing. */
		kAbort                                  /**< Tells the validate to abort. */
	};


    /**
     * The onEvent method is the callback method the Object::validate method calls when ever a problem or relevant event
     * occurs.
     *
     * @param eCode         The event code indicating the type of event.
     * @Object pObject      A pointer to the object that the event occured in.
     * @param strMessage    A non-internationalized message or string useful for logging (not displaying to user).
     */
	virtual ActionCode onEvent (
		EventCode eCode, 
        const Object* pObject,
        const wchar_t* strProblemMember,
		const wchar_t* strMessage) = 0;

};
};

#endif


