#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "LaserSetupCollectionImpl.h"
namespace LX
{

LaserSetupCollection* createLaserSetupCollectionObject (DocumentImpl* pDocument)
{
    LaserSetupCollection* pCollection = new LaserSetupCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

LaserSetupCollectionImpl::LaserSetupCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
