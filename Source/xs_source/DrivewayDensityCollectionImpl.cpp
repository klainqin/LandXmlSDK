#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DrivewayDensityCollectionImpl.h"
namespace LX
{

DrivewayDensityCollection* createDrivewayDensityCollectionObject (DocumentImpl* pDocument)
{
    DrivewayDensityCollection* pCollection = new DrivewayDensityCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DrivewayDensityCollectionImpl::DrivewayDensityCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
