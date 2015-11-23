#include "stdafx.h"
#include "LXTypes.h"
#include "Amendment.h"
#include "AmendmentItemCollection.h"
#include "LXTypesTmpl.h"
#include "AmendmentImpl.h"
#include "AmendmentItemCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
AmendmentTmpl<T>::AmendmentTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_AmendmentItem = createAmendmentItemCollectionObject(pDoc);
    m_DealingNumber = L"";
    m_bDealingNumber_valueSet = false;
    m_AmendmentDate = L"";
    m_bAmendmentDate_valueSet = false;
    m_Comments = L"";
    m_bComments_valueSet = false;
}


template<class T>
AmendmentTmpl<T>::~AmendmentTmpl ()
{
    if (m_AmendmentItem != NULL)
    {
        m_AmendmentItem->release();
        m_AmendmentItem = NULL;
    }
}

template <class T>
AmendmentItemCollection& AmendmentTmpl<T>::AmendmentItem()
{
    return *m_AmendmentItem;
}

template <class T>
const AmendmentItemCollection& AmendmentTmpl<T>::AmendmentItem() const
{
    return *m_AmendmentItem;
}



template <class T>
String AmendmentTmpl<T>::getDealingNumber() const
{
    return m_DealingNumber;
}

template <class T>
void AmendmentTmpl<T>::setDealingNumber(String value)
{
    m_DealingNumber = value;
    m_bDealingNumber_valueSet = true;
}

template <class T>
bool AmendmentTmpl<T>::hasValue_DealingNumber() const
{
    return m_bDealingNumber_valueSet;
}

template <class T>
void AmendmentTmpl<T>::resetValue_DealingNumber()
{
    m_bDealingNumber_valueSet = false;
}


template <class T>
String AmendmentTmpl<T>::getAmendmentDate() const
{
    return m_AmendmentDate;
}

template <class T>
void AmendmentTmpl<T>::setAmendmentDate(String value)
{
    m_AmendmentDate = value;
    m_bAmendmentDate_valueSet = true;
}

template <class T>
bool AmendmentTmpl<T>::hasValue_AmendmentDate() const
{
    return m_bAmendmentDate_valueSet;
}

template <class T>
void AmendmentTmpl<T>::resetValue_AmendmentDate()
{
    m_bAmendmentDate_valueSet = false;
}


template <class T>
String AmendmentTmpl<T>::getComments() const
{
    return m_Comments;
}

template <class T>
void AmendmentTmpl<T>::setComments(String value)
{
    m_Comments = value;
    m_bComments_valueSet = true;
}

template <class T>
bool AmendmentTmpl<T>::hasValue_Comments() const
{
    return m_bComments_valueSet;
}

template <class T>
void AmendmentTmpl<T>::resetValue_Comments()
{
    m_bComments_valueSet = false;
}



template <class T>
void AmendmentTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Amendment";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDealingNumber_valueSet)
    {
        stream.write(L" dealingNumber=\"");
        StringObjectImpl::streamOut(m_DealingNumber, stream);
        stream.write(L"\"");
    }
    if (m_bAmendmentDate_valueSet)
    {
        stream.write(L" amendmentDate=\"");
        StringObjectImpl::streamOut(m_AmendmentDate, stream);
        stream.write(L"\"");
    }
    if (m_bComments_valueSet)
    {
        stream.write(L" comments=\"");
        StringObjectImpl::streamOut(m_Comments, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_AmendmentItem)
    {
    	m_AmendmentItem->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum AmendmentTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_AmendmentItem)
    {
        if (m_AmendmentItem->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
