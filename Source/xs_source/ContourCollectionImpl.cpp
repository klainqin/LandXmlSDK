#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ContourCollectionImpl.h"
namespace LX
{

ContourCollection* createContourCollectionObject (DocumentImpl* pDocument)
{
    ContourCollection* pCollection = new ContourCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ContourCollectionImpl::ContourCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
