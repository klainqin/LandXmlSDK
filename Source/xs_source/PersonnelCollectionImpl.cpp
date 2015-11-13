#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PersonnelCollectionImpl.h"
namespace LX
{

PersonnelCollection* createPersonnelCollectionObject (DocumentImpl* pDocument)
{
    PersonnelCollection* pCollection = new PersonnelCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PersonnelCollectionImpl::PersonnelCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
