#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "BeginRunoffStaCollectionImpl.h"
namespace LX
{

BeginRunoffStaCollection* createBeginRunoffStaCollectionObject (DocumentImpl* pDocument)
{
    BeginRunoffStaCollection* pCollection = new BeginRunoffStaCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

BeginRunoffStaCollectionImpl::BeginRunoffStaCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
