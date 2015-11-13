#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "DesignSpeed85thCollectionImpl.h"
namespace LX
{

DesignSpeed85thCollection* createDesignSpeed85thCollectionObject (DocumentImpl* pDocument)
{
    DesignSpeed85thCollection* pCollection = new DesignSpeed85thCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

DesignSpeed85thCollectionImpl::DesignSpeed85thCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
