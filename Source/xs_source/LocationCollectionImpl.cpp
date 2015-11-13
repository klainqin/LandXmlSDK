#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "LocationCollectionImpl.h"
namespace LX
{

LocationCollection* createLocationCollectionObject (DocumentImpl* pDocument)
{
    LocationCollection* pCollection = new LocationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

LocationCollectionImpl::LocationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
