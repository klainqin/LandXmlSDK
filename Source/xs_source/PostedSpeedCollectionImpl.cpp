#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PostedSpeedCollectionImpl.h"
namespace LX
{

PostedSpeedCollection* createPostedSpeedCollectionObject (DocumentImpl* pDocument)
{
    PostedSpeedCollection* pCollection = new PostedSpeedCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PostedSpeedCollectionImpl::PostedSpeedCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
