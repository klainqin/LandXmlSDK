#if !defined(__LX_PARSEEXCEPTION_H)
#define __LX_PARSEEXCEPTION_H

#include "LXDefs.h"
#include "IParserEventSink.h"
#include "Exception.h"

/////////////////////////////////////////////////////////////////////////////
//
// File: ParseException.h
//
// Description: 
//		Contains the definition of the ParseException class.
//
// $History: ParseException.h $
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

class LX_DECLSPEC ParseException : public Exception
{
public:
	ParseException (
		const IParserEventSink::Severity eSeverity,
		const IParserEventSink::EventCode eCode, 
		String strMessage);

	IParserEventSink::EventCode getParserErrorCode () const;
	IParserEventSink::Severity getParserSeverity () const;


protected:
	IParserEventSink::EventCode m_eParserCode;
	IParserEventSink::Severity m_eSeverity;
	
};

};

#endif