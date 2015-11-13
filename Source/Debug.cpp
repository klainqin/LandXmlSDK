#include "stdafx.h"
#include "IStream.h"
#include "Debug.h"

namespace LX {

IStream* Debug::m_pStream = NULL;
wchar_t Debug::Buffer[2000];

void Debug::setDebugStream(
	IStream* pStream)
{
	m_pStream = pStream;
}

void Debug::write (wchar_t* strEntry)
{
	if (m_pStream)
	{
		m_pStream->write(strEntry);
	}
}

void Debug::writeLn (wchar_t* strEntry)
{
	if (m_pStream)
	{
		m_pStream->write(strEntry);
		m_pStream->write(L"\n");
	}
}

void Debug::writeBuffer ()
{
	write(Buffer);
}


} // End namespace LX

