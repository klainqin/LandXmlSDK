#include "stdafx.h"
#include "LXTypes.h"
#include "PointFile.h"
#include "LXTypesTmpl.h"
#include "PointFileImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PointFileTmpl<T>::PointFileTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_FileName = L"";
    m_bFileName_valueSet = false;
    m_FileType = L"";
    m_bFileType_valueSet = false;
    m_FileFormat = L"";
    m_bFileFormat_valueSet = false;
}


template<class T>
PointFileTmpl<T>::~PointFileTmpl<T> ()
{
}



template <class T>
String PointFileTmpl<T>::getFileName() const
{
    return m_FileName;
}

template <class T>
void PointFileTmpl<T>::setFileName(String value)
{
    m_FileName = value;
    m_bFileName_valueSet = true;
}

template <class T>
bool PointFileTmpl<T>::hasValue_FileName() const
{
    return m_bFileName_valueSet;
}

template <class T>
void PointFileTmpl<T>::resetValue_FileName()
{
    m_bFileName_valueSet = false;
}


template <class T>
String PointFileTmpl<T>::getFileType() const
{
    return m_FileType;
}

template <class T>
void PointFileTmpl<T>::setFileType(String value)
{
    m_FileType = value;
    m_bFileType_valueSet = true;
}

template <class T>
bool PointFileTmpl<T>::hasValue_FileType() const
{
    return m_bFileType_valueSet;
}

template <class T>
void PointFileTmpl<T>::resetValue_FileType()
{
    m_bFileType_valueSet = false;
}


template <class T>
String PointFileTmpl<T>::getFileFormat() const
{
    return m_FileFormat;
}

template <class T>
void PointFileTmpl<T>::setFileFormat(String value)
{
    m_FileFormat = value;
    m_bFileFormat_valueSet = true;
}

template <class T>
bool PointFileTmpl<T>::hasValue_FileFormat() const
{
    return m_bFileFormat_valueSet;
}

template <class T>
void PointFileTmpl<T>::resetValue_FileFormat()
{
    m_bFileFormat_valueSet = false;
}



template <class T>
void PointFileTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PointFile";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bFileName_valueSet)
    {
        stream.write(L" fileName=\"");
        StringObjectImpl::streamOut(m_FileName, stream);
        stream.write(L"\"");
    }
    if (m_bFileType_valueSet)
    {
        stream.write(L" fileType=\"");
        StringObjectImpl::streamOut(m_FileType, stream);
        stream.write(L"\"");
    }
    if (m_bFileFormat_valueSet)
    {
        stream.write(L" fileFormat=\"");
        StringObjectImpl::streamOut(m_FileFormat, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PointFileTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (!m_bFileName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"FileName", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bFileType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"FileType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bFileFormat_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"FileFormat", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
