#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ExclusionsCollectionImpl.h"
namespace LX
{

ExclusionsCollection* createExclusionsCollectionObject (DocumentImpl* pDocument)
{
    ExclusionsCollection* pCollection = new ExclusionsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ExclusionsCollectionImpl::ExclusionsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
