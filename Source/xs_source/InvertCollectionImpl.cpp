#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "InvertCollectionImpl.h"
namespace LX
{

InvertCollection* createInvertCollectionObject (DocumentImpl* pDocument)
{
    InvertCollection* pCollection = new InvertCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

InvertCollectionImpl::InvertCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
