#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "BikeFacilitiesCollectionImpl.h"
namespace LX
{

BikeFacilitiesCollection* createBikeFacilitiesCollectionObject (DocumentImpl* pDocument)
{
    BikeFacilitiesCollection* pCollection = new BikeFacilitiesCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

BikeFacilitiesCollectionImpl::BikeFacilitiesCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
