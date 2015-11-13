#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RoadsideCollectionImpl.h"
namespace LX
{

RoadsideCollection* createRoadsideCollectionObject (DocumentImpl* pDocument)
{
    RoadsideCollection* pCollection = new RoadsideCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RoadsideCollectionImpl::RoadsideCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
