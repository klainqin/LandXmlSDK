#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RetWallPntCollectionImpl.h"
namespace LX
{

RetWallPntCollection* createRetWallPntCollectionObject (DocumentImpl* pDocument)
{
    RetWallPntCollection* pCollection = new RetWallPntCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RetWallPntCollectionImpl::RetWallPntCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
