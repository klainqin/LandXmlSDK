
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Surfaces.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurfacesTmpl.inl"
namespace LX
{
template class SurfacesTmpl<Surfaces>;
SurfacesImpl::SurfacesImpl (DocumentImpl* pDoc)
    : SurfacesTmpl<Surfaces>(pDoc)
{
}
}; // namespace : LX
