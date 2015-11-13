#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PropertyCollectionImpl.h"
namespace LX
{

PropertyCollection* createPropertyCollectionObject (DocumentImpl* pDocument)
{
    PropertyCollection* pCollection = new PropertyCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PropertyCollectionImpl::PropertyCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
