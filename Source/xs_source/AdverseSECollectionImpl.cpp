#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "AdverseSECollectionImpl.h"
namespace LX
{

AdverseSECollection* createAdverseSECollectionObject (DocumentImpl* pDocument)
{
    AdverseSECollection* pCollection = new AdverseSECollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

AdverseSECollectionImpl::AdverseSECollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
