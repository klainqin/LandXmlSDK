/////////////////////////////////////////////////////////////////////////////
//
// File: ParseException.cpp
//
// Description: 
//		Contains the implementation of the ParseException class.
//
// $History: ParseException.cpp $
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ParseException.h"

namespace LX
{

ParseException::ParseException (
	const IParserEventSink::Severity eSeverity,
	const IParserEventSink::EventCode eCode, 
	String strMessage)
	: Exception(Exception::kParserFailure, strMessage)
{
	m_eParserCode = eCode;
}

IParserEventSink::EventCode ParseException::getParserErrorCode () const
{
	return m_eParserCode;
}

IParserEventSink::Severity ParseException::getParserSeverity () const
{
	return m_eSeverity;
}


}; // End namespace LX
