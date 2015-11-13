
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ProfSurf.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ProfSurfTmpl.inl"
namespace LX
{
template class ProfSurfTmpl<ProfSurf>;
ProfSurfImpl::ProfSurfImpl (DocumentImpl* pDoc)
    : ProfSurfTmpl<ProfSurf>(pDoc)
{
}
}; // namespace : LX
