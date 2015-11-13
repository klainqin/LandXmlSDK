#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TestObservationCollectionImpl.h"
namespace LX
{

TestObservationCollection* createTestObservationCollectionObject (DocumentImpl* pDocument)
{
    TestObservationCollection* pCollection = new TestObservationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TestObservationCollectionImpl::TestObservationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
