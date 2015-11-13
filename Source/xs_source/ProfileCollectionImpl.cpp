#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ProfileCollectionImpl.h"
namespace LX
{

ProfileCollection* createProfileCollectionObject (DocumentImpl* pDocument)
{
    ProfileCollection* pCollection = new ProfileCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ProfileCollectionImpl::ProfileCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
