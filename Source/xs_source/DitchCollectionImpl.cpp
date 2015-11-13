#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DitchCollectionImpl.h"
namespace LX
{

DitchCollection* createDitchCollectionObject (DocumentImpl* pDocument)
{
    DitchCollection* pCollection = new DitchCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DitchCollectionImpl::DitchCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
