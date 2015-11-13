#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AlignmentCollectionImpl.h"
namespace LX
{

AlignmentCollection* createAlignmentCollectionObject (DocumentImpl* pDocument)
{
    AlignmentCollection* pCollection = new AlignmentCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AlignmentCollectionImpl::AlignmentCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
