
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GradeSurface.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GradeSurfaceTmpl.inl"
namespace LX
{
template class GradeSurfaceTmpl<GradeSurface>;
GradeSurfaceImpl::GradeSurfaceImpl (DocumentImpl* pDoc)
    : GradeSurfaceTmpl<GradeSurface>(pDoc)
{
}
}; // namespace : LX
