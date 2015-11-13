
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PVI.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PVITmpl.inl"
namespace LX
{
template class PVITmpl<PVI>;
PVIImpl::PVIImpl (DocumentImpl* pDoc)
    : PVITmpl<PVI>(pDoc)
{
}
}; // namespace : LX
