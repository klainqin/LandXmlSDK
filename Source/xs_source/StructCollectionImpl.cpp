#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "StructCollectionImpl.h"
namespace LX
{

StructCollection* createStructCollectionObject (DocumentImpl* pDocument)
{
    StructCollection* pCollection = new StructCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

StructCollectionImpl::StructCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
