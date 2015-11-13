
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CoordGeom.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CoordGeomTmpl.inl"
namespace LX
{
template class CoordGeomTmpl<CoordGeom>;
CoordGeomImpl::CoordGeomImpl (DocumentImpl* pDoc)
    : CoordGeomTmpl<CoordGeom>(pDoc)
{
}
Object* CoordGeomImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableCoordGeomCollection());
}
}; // namespace : LX
