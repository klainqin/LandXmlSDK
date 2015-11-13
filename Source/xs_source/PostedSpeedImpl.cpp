
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PostedSpeed.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PostedSpeedTmpl.inl"
namespace LX
{
template class PostedSpeedTmpl<PostedSpeed>;
PostedSpeedImpl::PostedSpeedImpl (DocumentImpl* pDoc)
    : PostedSpeedTmpl<PostedSpeed>(pDoc)
{
}
}; // namespace : LX
