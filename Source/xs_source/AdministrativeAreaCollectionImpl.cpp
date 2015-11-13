#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AdministrativeAreaCollectionImpl.h"
namespace LX
{

AdministrativeAreaCollection* createAdministrativeAreaCollectionObject (DocumentImpl* pDocument)
{
    AdministrativeAreaCollection* pCollection = new AdministrativeAreaCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AdministrativeAreaCollectionImpl::AdministrativeAreaCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
