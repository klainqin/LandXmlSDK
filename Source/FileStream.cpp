
#include "stdafx.h"
#include "IStream.h"
#include "FileStream.h"


/////////////////////////////////////////////////////////////////////////////
//
// File: FileStream.cpp
//
// Description: 
//		Contains the implementation of the FileStream class
//
// $History: FileStream.cpp $
//
/////////////////////////////////////////////////////////////////////////////

namespace LX
{

FileStream::FileStream(
	char* strFileName)
{
	m_hFile = CreateFile(strFileName, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
}

void FileStream::write (
	const wchar_t* strValue)
{
}

};
