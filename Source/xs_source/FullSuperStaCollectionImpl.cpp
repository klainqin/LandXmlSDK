#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "FullSuperStaCollectionImpl.h"
namespace LX
{

FullSuperStaCollection* createFullSuperStaCollectionObject (DocumentImpl* pDocument)
{
    FullSuperStaCollection* pCollection = new FullSuperStaCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

FullSuperStaCollectionImpl::FullSuperStaCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
