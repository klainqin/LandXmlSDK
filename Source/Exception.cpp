/////////////////////////////////////////////////////////////////////////////
//
// File: Exception.cpp
//
// Description: 
//		Contains the implementation of the Exception class.
//
// $History: Exception.cpp $
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "LXDefs.h"
#include "Exception.h"

namespace LX
{

Exception::Exception (
	const Code eCode, 
	const String strMessage)
{
	m_eCode = eCode;
	m_strMessage = strMessage;
}

String Exception::getMessage () const
{
	return m_strMessage;
}

Exception::Code Exception::getCode () const
{
	return m_eCode;
}

}; // End namespace LX
