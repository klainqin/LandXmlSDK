#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ControlChecksCollectionImpl.h"
namespace LX
{

ControlChecksCollection* createControlChecksCollectionObject (DocumentImpl* pDocument)
{
    ControlChecksCollection* pCollection = new ControlChecksCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ControlChecksCollectionImpl::ControlChecksCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
