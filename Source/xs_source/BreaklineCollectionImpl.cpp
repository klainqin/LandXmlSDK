#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "BreaklineCollectionImpl.h"
namespace LX
{

BreaklineCollection* createBreaklineCollectionObject (DocumentImpl* pDocument)
{
    BreaklineCollection* pCollection = new BreaklineCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

BreaklineCollectionImpl::BreaklineCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
