
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Speeds.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SpeedsTmpl.inl"
namespace LX
{
template class SpeedsTmpl<Speeds>;
SpeedsImpl::SpeedsImpl (DocumentImpl* pDoc)
    : SpeedsTmpl<Speeds>(pDoc)
{
}
}; // namespace : LX
