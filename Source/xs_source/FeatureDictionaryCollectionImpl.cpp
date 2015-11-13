#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "FeatureDictionaryCollectionImpl.h"
namespace LX
{

FeatureDictionaryCollection* createFeatureDictionaryCollectionObject (DocumentImpl* pDocument)
{
    FeatureDictionaryCollection* pCollection = new FeatureDictionaryCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

FeatureDictionaryCollectionImpl::FeatureDictionaryCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
