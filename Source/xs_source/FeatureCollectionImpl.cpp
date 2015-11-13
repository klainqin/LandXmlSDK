#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "FeatureCollectionImpl.h"
namespace LX
{

FeatureCollection* createFeatureCollectionObject (DocumentImpl* pDocument)
{
    FeatureCollection* pCollection = new FeatureCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

FeatureCollectionImpl::FeatureCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
