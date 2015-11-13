#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ProfSurfCollectionImpl.h"
namespace LX
{

ProfSurfCollection* createProfSurfCollectionObject (DocumentImpl* pDocument)
{
    ProfSurfCollection* pCollection = new ProfSurfCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ProfSurfCollectionImpl::ProfSurfCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
