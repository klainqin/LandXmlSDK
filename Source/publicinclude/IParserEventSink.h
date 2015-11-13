#if !defined(__LX_IPARSEREVENTSINK_H)
#define __LX_IPARSEREVENTSINK_H

/**
 * \file IParserEventSink.h
 *
 * Contains the definition of the IParserEventSink interface.
 */

#include "LXDefs.h"

namespace LX
{

/**
 * The IParserEventSink interface represents a callback interface that is passed
 * to the loadXml method of the Document object.
 *
 * This interface enables the loadXml caller to receive parse events from the parser.
 * These events have a Severity and Code.  The loadXml caller can abort the parse by returning
 * kAbort from the onEvent method call.  
 */
class IParserEventSink
{
public:

    /**
     * The EventCode enum is the informational code on the type of error/info encountered by the parser.
     */
	enum EventCode
	{
		kOk = 1,                                /**< Everything is ok */
		kFail,                                  /**< The evil general failure, abort execution immediately */
		kAllocationFailure,                     /**< Memory allocation failure, abort execution immediately */
		kBadStartTag,                           /**< Bad or unexpected XML start tag.  The parser will skip this tag. */
		kInvalidXml,                            /**< Bad XML data.  The parser will abort. */
		kInvalidXmlBadEndTag,                   /**< Bad or unexpected XML end tag.  The parser cannot continue and will abort */
		kRequiredAttributeMissing,              /**< Expected Attribute missing.  Purely informational the parser can continue */
		kUnableToParseAttribute,                /**< Unable to read or parse attribute.  The parser will skip this attribute and continue. */
		kInvalidEnumerationValue,               /**< Bad enumeration value within an attribute or tag value.  The parser will skip the value and continue. */
		kInvalidTypeConversion,                 /**< Parser could not convert type (usually bad xml).  The parser will abort. */
		kItemNameIsNotLocallyUnique,            /**< Parser could not add item to a collection because it's name or id conflicts with an item already in the collection.  Parser will skip and continue.*/
		kItemNameIsNotGloballyUnique,           /**< Parser could not add globally named item to a collection because it's name or id conflicts with an item already in the entire object model.  Parser will skip and continue.*/
		kUserAbort,                             /**< Parser was aborted by the user */
		kTagProcessed,                          /**< Parser completed parsing a tag. Purely infomational. */
		kInvalidBooleanValue                    /**< Parser could not parse boolean value (ie value was something other than '1', '0', 'true', 'false' */
	};


    /**
     * The Severity enum indicates the severity of the event.
     */
	enum Severity
	{
		kInfo = 1,                              /**< Event is purely information.  Processing will go on */
		kRecoverableError,                      /**< Parser found a minor problem in the XML, but it can continue (usually skipping the bad data) */
	    kUnrecoverableError                     /**< The Parser encountered an unrecoverable error will abort. */
	};


    /**
     * The ActionCode is returned by the object implementing the IParserEventSink interface indicating what it wants the parser to do.
     */
	enum ActionCode
	{
		kContinue = 1,                          /**< Tells the parser to continue processing. */
		kAbort                                  /**< Tells the parser to abort. */
	};


    /**
     * The onEvent method is the callback method the parser uses to call into the IParserEventSink derived object upon
     * certain events.
     *
     * @param eSeverity     The severity of the event.
     * @param eCode         The event code indicating the type of event.
     * @param strCurrentElement The current element being processed when the event occurred (not null terminated)
     * @param nCurrentElementLen The length of the strCurrentElement string.
     * @param nLineNumer    The line number the event occurred in the xml file.
     * @param strMessage    A non-internationalized message or string useful for logging (not displaying to user).
     */
	virtual ActionCode onEvent (
		Severity eSeverity,
		EventCode eCode, 
		const wchar_t* strCurrentElement,
		int nCurrentElementLen, 
		int nLineNumber, 
		const wchar_t* strMessage) = 0;

};
};

#endif


