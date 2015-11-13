#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AnnotationCollectionImpl.h"
namespace LX
{

AnnotationCollection* createAnnotationCollectionObject (DocumentImpl* pDocument)
{
    AnnotationCollection* pCollection = new AnnotationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AnnotationCollectionImpl::AnnotationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
