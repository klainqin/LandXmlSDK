#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ThruLaneCollectionImpl.h"
namespace LX
{

ThruLaneCollection* createThruLaneCollectionObject (DocumentImpl* pDocument)
{
    ThruLaneCollection* pCollection = new ThruLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ThruLaneCollectionImpl::ThruLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
