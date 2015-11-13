
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "MapPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "MapPointTmpl.inl"
namespace LX
{
template class MapPointTmpl<MapPoint>;
MapPointImpl::MapPointImpl (DocumentImpl* pDoc)
    : MapPointTmpl<MapPoint>(pDoc)
{
}
}; // namespace : LX
