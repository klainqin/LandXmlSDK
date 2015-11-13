#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DocFileRefCollectionImpl.h"
namespace LX
{

DocFileRefCollection* createDocFileRefCollectionObject (DocumentImpl* pDocument)
{
    DocFileRefCollection* pCollection = new DocFileRefCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DocFileRefCollectionImpl::DocFileRefCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
