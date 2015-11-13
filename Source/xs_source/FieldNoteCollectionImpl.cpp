#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "FieldNoteCollectionImpl.h"
namespace LX
{

FieldNoteCollection* createFieldNoteCollectionObject (DocumentImpl* pDocument)
{
    FieldNoteCollection* pCollection = new FieldNoteCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

FieldNoteCollectionImpl::FieldNoteCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
