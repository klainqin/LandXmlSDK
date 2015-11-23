#include "stdafx.h"
#include "LXTypes.h"
#include "PointFiles.h"
#include "PointFileCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PointFilesImpl.h"
#include "PointFileCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PointFilesTmpl<T>::PointFilesTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_PointFile = createPointFileCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
PointFilesTmpl<T>::~PointFilesTmpl ()
{
    if (m_PointFile != NULL)
    {
        m_PointFile->release();
        m_PointFile = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
PointFileCollection& PointFilesTmpl<T>::PointFile()
{
    return *m_PointFile;
}

template <class T>
const PointFileCollection& PointFilesTmpl<T>::PointFile() const
{
    return *m_PointFile;
}

template <class T>
FeatureCollection& PointFilesTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PointFilesTmpl<T>::Feature() const
{
    return *m_Feature;
}




template <class T>
void PointFilesTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PointFiles";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_PointFile)
    {
    	m_PointFile->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum PointFilesTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_PointFile)
    {
        if (m_PointFile->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
