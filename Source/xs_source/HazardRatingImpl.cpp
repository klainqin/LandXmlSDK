
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "HazardRating.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "HazardRatingTmpl.inl"
namespace LX
{
template class HazardRatingTmpl<HazardRating>;
HazardRatingImpl::HazardRatingImpl (DocumentImpl* pDoc)
    : HazardRatingTmpl<HazardRating>(pDoc)
{
}
}; // namespace : LX
