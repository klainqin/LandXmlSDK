#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ProfAlignCollectionImpl.h"
namespace LX
{

ProfAlignCollection* createProfAlignCollectionObject (DocumentImpl* pDocument)
{
    ProfAlignCollection* pCollection = new ProfAlignCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ProfAlignCollectionImpl::ProfAlignCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
