#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CrashHistoryCollectionImpl.h"
namespace LX
{

CrashHistoryCollection* createCrashHistoryCollectionObject (DocumentImpl* pDocument)
{
    CrashHistoryCollection* pCollection = new CrashHistoryCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CrashHistoryCollectionImpl::CrashHistoryCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
