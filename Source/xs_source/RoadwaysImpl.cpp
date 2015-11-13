
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Roadways.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RoadwaysTmpl.inl"
namespace LX
{
template class RoadwaysTmpl<Roadways>;
RoadwaysImpl::RoadwaysImpl (DocumentImpl* pDoc)
    : RoadwaysTmpl<Roadways>(pDoc)
{
}
}; // namespace : LX
