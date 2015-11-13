#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CoordGeomCollectionImpl.h"
namespace LX
{

CoordGeomCollection* createCoordGeomCollectionObject (DocumentImpl* pDocument)
{
    CoordGeomCollection* pCollection = new CoordGeomCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CoordGeomCollectionImpl::CoordGeomCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
