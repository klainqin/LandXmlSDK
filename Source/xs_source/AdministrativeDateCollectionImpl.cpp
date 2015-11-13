#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AdministrativeDateCollectionImpl.h"
namespace LX
{

AdministrativeDateCollection* createAdministrativeDateCollectionObject (DocumentImpl* pDocument)
{
    AdministrativeDateCollection* pCollection = new AdministrativeDateCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AdministrativeDateCollectionImpl::AdministrativeDateCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
