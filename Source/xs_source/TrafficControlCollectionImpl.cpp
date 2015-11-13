#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TrafficControlCollectionImpl.h"
namespace LX
{

TrafficControlCollection* createTrafficControlCollectionObject (DocumentImpl* pDocument)
{
    TrafficControlCollection* pCollection = new TrafficControlCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TrafficControlCollectionImpl::TrafficControlCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
