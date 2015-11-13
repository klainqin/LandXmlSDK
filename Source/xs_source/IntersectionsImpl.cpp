
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Intersections.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "IntersectionsTmpl.inl"
namespace LX
{
template class IntersectionsTmpl<Intersections>;
IntersectionsImpl::IntersectionsImpl (DocumentImpl* pDoc)
    : IntersectionsTmpl<Intersections>(pDoc)
{
}
}; // namespace : LX
