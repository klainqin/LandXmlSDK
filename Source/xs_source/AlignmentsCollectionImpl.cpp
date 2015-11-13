#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AlignmentsCollectionImpl.h"
namespace LX
{

AlignmentsCollection* createAlignmentsCollectionObject (DocumentImpl* pDocument)
{
    AlignmentsCollection* pCollection = new AlignmentsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AlignmentsCollectionImpl::AlignmentsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
