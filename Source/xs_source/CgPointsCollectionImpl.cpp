#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CgPointsCollectionImpl.h"
namespace LX
{

CgPointsCollection* createCgPointsCollectionObject (DocumentImpl* pDocument)
{
    CgPointsCollection* pCollection = new CgPointsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CgPointsCollectionImpl::CgPointsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
