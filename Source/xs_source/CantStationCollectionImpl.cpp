#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CantStationCollectionImpl.h"
namespace LX
{

CantStationCollection* createCantStationCollectionObject (DocumentImpl* pDocument)
{
    CantStationCollection* pCollection = new CantStationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CantStationCollectionImpl::CantStationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
