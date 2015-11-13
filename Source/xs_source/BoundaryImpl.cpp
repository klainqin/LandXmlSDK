
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Boundary.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BoundaryTmpl.inl"
namespace LX
{
template class BoundaryTmpl<Boundary>;
BoundaryImpl::BoundaryImpl (DocumentImpl* pDoc)
    : BoundaryTmpl<Boundary>(pDoc)
{
}
}; // namespace : LX
