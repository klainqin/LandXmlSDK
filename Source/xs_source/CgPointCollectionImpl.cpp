#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CgPointCollectionImpl.h"
namespace LX
{

CgPointCollection* createCgPointCollectionObject (DocumentImpl* pDocument)
{
    CgPointCollection* pCollection = new CgPointCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CgPointCollectionImpl::CgPointCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
