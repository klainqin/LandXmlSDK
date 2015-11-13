#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ObstructionOffsetCollectionImpl.h"
namespace LX
{

ObstructionOffsetCollection* createObstructionOffsetCollectionObject (DocumentImpl* pDocument)
{
    ObstructionOffsetCollection* pCollection = new ObstructionOffsetCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ObstructionOffsetCollectionImpl::ObstructionOffsetCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
