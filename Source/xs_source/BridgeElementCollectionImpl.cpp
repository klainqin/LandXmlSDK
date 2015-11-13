#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "BridgeElementCollectionImpl.h"
namespace LX
{

BridgeElementCollection* createBridgeElementCollectionObject (DocumentImpl* pDocument)
{
    BridgeElementCollection* pCollection = new BridgeElementCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

BridgeElementCollectionImpl::BridgeElementCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
