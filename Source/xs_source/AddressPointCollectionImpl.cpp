#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AddressPointCollectionImpl.h"
namespace LX
{

AddressPointCollection* createAddressPointCollectionObject (DocumentImpl* pDocument)
{
    AddressPointCollection* pCollection = new AddressPointCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AddressPointCollectionImpl::AddressPointCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
