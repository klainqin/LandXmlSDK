#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ClassificationCollectionImpl.h"
namespace LX
{

ClassificationCollection* createClassificationCollectionObject (DocumentImpl* pDocument)
{
    ClassificationCollection* pCollection = new ClassificationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ClassificationCollectionImpl::ClassificationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
