#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "RunoffStaCollectionImpl.h"
namespace LX
{

RunoffStaCollection* createRunoffStaCollectionObject (DocumentImpl* pDocument)
{
    RunoffStaCollection* pCollection = new RunoffStaCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

RunoffStaCollectionImpl::RunoffStaCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
