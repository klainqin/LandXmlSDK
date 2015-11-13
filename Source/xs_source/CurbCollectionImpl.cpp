#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CurbCollectionImpl.h"
namespace LX
{

CurbCollection* createCurbCollectionObject (DocumentImpl* pDocument)
{
    CurbCollection* pCollection = new CurbCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CurbCollectionImpl::CurbCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
