
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CrashData.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CrashDataTmpl.inl"
namespace LX
{
template class CrashDataTmpl<CrashData>;
CrashDataImpl::CrashDataImpl (DocumentImpl* pDoc)
    : CrashDataTmpl<CrashData>(pDoc)
{
}
}; // namespace : LX
