#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "VolumeCollectionImpl.h"
namespace LX
{

VolumeCollection* createVolumeCollectionObject (DocumentImpl* pDocument)
{
    VolumeCollection* pCollection = new VolumeCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

VolumeCollectionImpl::VolumeCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
