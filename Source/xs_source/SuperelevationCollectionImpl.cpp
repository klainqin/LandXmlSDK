#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SuperelevationCollectionImpl.h"
namespace LX
{

SuperelevationCollection* createSuperelevationCollectionObject (DocumentImpl* pDocument)
{
    SuperelevationCollection* pCollection = new SuperelevationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SuperelevationCollectionImpl::SuperelevationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
