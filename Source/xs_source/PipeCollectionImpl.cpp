#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PipeCollectionImpl.h"
namespace LX
{

PipeCollection* createPipeCollectionObject (DocumentImpl* pDocument)
{
    PipeCollection* pCollection = new PipeCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PipeCollectionImpl::PipeCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
