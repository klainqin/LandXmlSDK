#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "HeadOfPowerCollectionImpl.h"
namespace LX
{

HeadOfPowerCollection* createHeadOfPowerCollectionObject (DocumentImpl* pDocument)
{
    HeadOfPowerCollection* pCollection = new HeadOfPowerCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

HeadOfPowerCollectionImpl::HeadOfPowerCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
