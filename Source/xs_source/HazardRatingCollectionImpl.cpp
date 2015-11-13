#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "HazardRatingCollectionImpl.h"
namespace LX
{

HazardRatingCollection* createHazardRatingCollectionObject (DocumentImpl* pDocument)
{
    HazardRatingCollection* pCollection = new HazardRatingCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

HazardRatingCollectionImpl::HazardRatingCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
