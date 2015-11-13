#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PipeNetworkCollectionImpl.h"
namespace LX
{

PipeNetworkCollection* createPipeNetworkCollectionObject (DocumentImpl* pDocument)
{
    PipeNetworkCollection* pCollection = new PipeNetworkCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PipeNetworkCollectionImpl::PipeNetworkCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
