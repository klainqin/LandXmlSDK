
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "VolumeGeom.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "VolumeGeomTmpl.inl"
namespace LX
{
template class VolumeGeomTmpl<VolumeGeom>;
VolumeGeomImpl::VolumeGeomImpl (DocumentImpl* pDoc)
    : VolumeGeomTmpl<VolumeGeom>(pDoc)
{
}
}; // namespace : LX
