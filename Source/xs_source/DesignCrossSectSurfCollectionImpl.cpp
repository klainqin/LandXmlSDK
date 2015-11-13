#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DesignCrossSectSurfCollectionImpl.h"
namespace LX
{

DesignCrossSectSurfCollection* createDesignCrossSectSurfCollectionObject (DocumentImpl* pDocument)
{
    DesignCrossSectSurfCollection* pCollection = new DesignCrossSectSurfCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DesignCrossSectSurfCollectionImpl::DesignCrossSectSurfCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
