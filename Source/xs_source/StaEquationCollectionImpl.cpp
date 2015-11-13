#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "StaEquationCollectionImpl.h"
namespace LX
{

StaEquationCollection* createStaEquationCollectionObject (DocumentImpl* pDocument)
{
    StaEquationCollection* pCollection = new StaEquationCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

StaEquationCollectionImpl::StaEquationCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
