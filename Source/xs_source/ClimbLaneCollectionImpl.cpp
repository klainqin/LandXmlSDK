#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ClimbLaneCollectionImpl.h"
namespace LX
{

ClimbLaneCollection* createClimbLaneCollectionObject (DocumentImpl* pDocument)
{
    ClimbLaneCollection* pCollection = new ClimbLaneCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ClimbLaneCollectionImpl::ClimbLaneCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
