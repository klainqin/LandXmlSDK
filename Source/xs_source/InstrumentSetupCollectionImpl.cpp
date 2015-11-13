#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "InstrumentSetupCollectionImpl.h"
namespace LX
{

InstrumentSetupCollection* createInstrumentSetupCollectionObject (DocumentImpl* pDocument)
{
    InstrumentSetupCollection* pCollection = new InstrumentSetupCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

InstrumentSetupCollectionImpl::InstrumentSetupCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
