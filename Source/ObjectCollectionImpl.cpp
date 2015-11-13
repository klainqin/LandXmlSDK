#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ObjectCollectionImpl.h"

namespace LX
{

ObjectCollection* createObjectCollectionObject (DocumentImpl* pDocument)
{
    ObjectCollection* pCollection = new ObjectCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ObjectCollectionImpl::ObjectCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
