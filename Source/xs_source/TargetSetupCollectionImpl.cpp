#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "TargetSetupCollectionImpl.h"
namespace LX
{

TargetSetupCollection* createTargetSetupCollectionObject (DocumentImpl* pDocument)
{
    TargetSetupCollection* pCollection = new TargetSetupCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

TargetSetupCollectionImpl::TargetSetupCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
