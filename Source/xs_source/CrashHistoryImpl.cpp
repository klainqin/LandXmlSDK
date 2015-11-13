
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CrashHistory.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CrashHistoryTmpl.inl"
namespace LX
{
template class CrashHistoryTmpl<CrashHistory>;
CrashHistoryImpl::CrashHistoryImpl (DocumentImpl* pDoc)
    : CrashHistoryTmpl<CrashHistory>(pDoc)
{
}
}; // namespace : LX
