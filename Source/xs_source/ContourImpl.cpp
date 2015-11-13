
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Contour.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ContourTmpl.inl"
namespace LX
{
template class ContourTmpl<Contour>;
ContourImpl::ContourImpl (DocumentImpl* pDoc)
    : ContourTmpl<Contour>(pDoc)
{
}
}; // namespace : LX
