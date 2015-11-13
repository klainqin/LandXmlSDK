
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "POI.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "POITmpl.inl"
namespace LX
{
template class POITmpl<POI>;
POIImpl::POIImpl (DocumentImpl* pDoc)
    : POITmpl<POI>(pDoc)
{
}
}; // namespace : LX
