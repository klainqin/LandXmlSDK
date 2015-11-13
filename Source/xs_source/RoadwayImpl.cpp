
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Roadway.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RoadwayTmpl.inl"
namespace LX
{
template class RoadwayTmpl<Roadway>;
RoadwayImpl::RoadwayImpl (DocumentImpl* pDoc)
    : RoadwayTmpl<Roadway>(pDoc)
{
}
Object* RoadwayImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableRoadwayCollection());
}
}; // namespace : LX
