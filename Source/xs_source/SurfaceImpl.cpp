
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Surface.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurfaceTmpl.inl"
namespace LX
{
template class SurfaceTmpl<Surface>;
SurfaceImpl::SurfaceImpl (DocumentImpl* pDoc)
    : SurfaceTmpl<Surface>(pDoc)
{
}
Object* SurfaceImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableSurfaceCollection());
}
}; // namespace : LX
