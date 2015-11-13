#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PassingLaneCollectionImpl.h"
namespace LX
{

PassingLaneCollection* createPassingLaneCollectionObject (DocumentImpl* pDocument)
{
    PassingLaneCollection* pCollection = new PassingLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PassingLaneCollectionImpl::PassingLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
