#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PntList2DCollectionImpl.h"
namespace LX
{

PntList2DCollection* createPntList2DCollectionObject (DocumentImpl* pDocument)
{
    PntList2DCollection* pCollection = new PntList2DCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PntList2DCollectionImpl::PntList2DCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
