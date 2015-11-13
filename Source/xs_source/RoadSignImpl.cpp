
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RoadSign.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RoadSignTmpl.inl"
namespace LX
{
template class RoadSignTmpl<RoadSign>;
RoadSignImpl::RoadSignImpl (DocumentImpl* pDoc)
    : RoadSignTmpl<RoadSign>(pDoc)
{
}
}; // namespace : LX
