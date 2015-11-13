
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DesignCrossSectSurf.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DesignCrossSectSurfTmpl.inl"
namespace LX
{
template class DesignCrossSectSurfTmpl<DesignCrossSectSurf>;
DesignCrossSectSurfImpl::DesignCrossSectSurfImpl (DocumentImpl* pDoc)
    : DesignCrossSectSurfTmpl<DesignCrossSectSurf>(pDoc)
{
}
}; // namespace : LX
