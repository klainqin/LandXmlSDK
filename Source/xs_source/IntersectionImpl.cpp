
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Intersection.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "IntersectionTmpl.inl"
namespace LX
{
template class IntersectionTmpl<Intersection>;
IntersectionImpl::IntersectionImpl (DocumentImpl* pDoc)
    : IntersectionTmpl<Intersection>(pDoc)
{
}
}; // namespace : LX
