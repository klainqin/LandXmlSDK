#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "ComplexNameCollectionImpl.h"
namespace LX
{

ComplexNameCollection* createComplexNameCollectionObject (DocumentImpl* pDocument)
{
    ComplexNameCollection* pCollection = new ComplexNameCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

ComplexNameCollectionImpl::ComplexNameCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
