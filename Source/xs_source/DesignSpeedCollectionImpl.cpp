#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DesignSpeedCollectionImpl.h"
namespace LX
{

DesignSpeedCollection* createDesignSpeedCollectionObject (DocumentImpl* pDocument)
{
    DesignSpeedCollection* pCollection = new DesignSpeedCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DesignSpeedCollectionImpl::DesignSpeedCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
