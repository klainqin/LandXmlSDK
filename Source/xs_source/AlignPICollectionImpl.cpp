#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AlignPICollectionImpl.h"
namespace LX
{

AlignPICollection* createAlignPICollectionObject (DocumentImpl* pDocument)
{
    AlignPICollection* pCollection = new AlignPICollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AlignPICollectionImpl::AlignPICollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
