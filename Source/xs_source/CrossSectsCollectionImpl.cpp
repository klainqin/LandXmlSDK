#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CrossSectsCollectionImpl.h"
namespace LX
{

CrossSectsCollection* createCrossSectsCollectionObject (DocumentImpl* pDocument)
{
    CrossSectsCollection* pCollection = new CrossSectsCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CrossSectsCollectionImpl::CrossSectsCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
