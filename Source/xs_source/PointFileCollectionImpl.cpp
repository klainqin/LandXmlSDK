#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PointFileCollectionImpl.h"
namespace LX
{

PointFileCollection* createPointFileCollectionObject (DocumentImpl* pDocument)
{
    PointFileCollection* pCollection = new PointFileCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PointFileCollectionImpl::PointFileCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
