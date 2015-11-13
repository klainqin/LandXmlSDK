#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "CrashDataCollectionImpl.h"
namespace LX
{

CrashDataCollection* createCrashDataCollectionObject (DocumentImpl* pDocument)
{
    CrashDataCollection* pCollection = new CrashDataCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

CrashDataCollectionImpl::CrashDataCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
