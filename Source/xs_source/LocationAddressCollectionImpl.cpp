#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "LocationAddressCollectionImpl.h"
namespace LX
{

LocationAddressCollection* createLocationAddressCollectionObject (DocumentImpl* pDocument)
{
    LocationAddressCollection* pCollection = new LocationAddressCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

LocationAddressCollectionImpl::LocationAddressCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
