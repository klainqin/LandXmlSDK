
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Curb.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CurbTmpl.inl"
namespace LX
{
template class CurbTmpl<Curb>;
CurbImpl::CurbImpl (DocumentImpl* pDoc)
    : CurbTmpl<Curb>(pDoc)
{
}
}; // namespace : LX
