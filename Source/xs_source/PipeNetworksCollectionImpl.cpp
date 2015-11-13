#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PipeNetworksCollectionImpl.h"
namespace LX
{

PipeNetworksCollection* createPipeNetworksCollectionObject (DocumentImpl* pDocument)
{
    PipeNetworksCollection* pCollection = new PipeNetworksCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PipeNetworksCollectionImpl::PipeNetworksCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
