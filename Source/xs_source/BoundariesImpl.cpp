
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Boundaries.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BoundariesTmpl.inl"
namespace LX
{
template class BoundariesTmpl<Boundaries>;
BoundariesImpl::BoundariesImpl (DocumentImpl* pDoc)
    : BoundariesTmpl<Boundaries>(pDoc)
{
}
}; // namespace : LX
