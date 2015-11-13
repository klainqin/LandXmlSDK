#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TimingCollectionImpl.h"
namespace LX
{

TimingCollection* createTimingCollectionObject (DocumentImpl* pDocument)
{
    TimingCollection* pCollection = new TimingCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TimingCollectionImpl::TimingCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
