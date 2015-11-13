#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "GradeModelCollectionImpl.h"
namespace LX
{

GradeModelCollection* createGradeModelCollectionObject (DocumentImpl* pDocument)
{
    GradeModelCollection* pCollection = new GradeModelCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

GradeModelCollectionImpl::GradeModelCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
