#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PntList3DCollectionImpl.h"
namespace LX
{

PntList3DCollection* createPntList3DCollectionObject (DocumentImpl* pDocument)
{
    PntList3DCollection* pCollection = new PntList3DCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PntList3DCollectionImpl::PntList3DCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
