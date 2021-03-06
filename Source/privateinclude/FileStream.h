#if !defined(__LX_FILESTREAM_H)
#define __LX_FILESTREAM_H
/////////////////////////////////////////////////////////////////////////////
//
// File: FileStream.h
//
// Description: 
//		Contains the definition of the IStream interface. 
//
// $History: IStream.h $
//
/////////////////////////////////////////////////////////////////////////////


namespace LX
{
/////////////////////////////////////////////////////////////////////////////
//
// Class: FileStream
//
// Description: 
//		
//
/////////////////////////////////////////////////////////////////////////////
class FileStream : public IStream
{
public:
	FileStream (
		char* strFileName);

	virtual void write (
		const wchar_t* strValue);

private:
    // TODO: use fopen() to replace the file operation. 
	//HANDLE m_hFile;
};
};

#endif


