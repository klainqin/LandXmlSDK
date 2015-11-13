
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "LaserDetails.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "LaserDetailsTmpl.inl"
namespace LX
{
template class LaserDetailsTmpl<LaserDetails>;
LaserDetailsImpl::LaserDetailsImpl (DocumentImpl* pDoc)
    : LaserDetailsTmpl<LaserDetails>(pDoc)
{
}
}; // namespace : LX
