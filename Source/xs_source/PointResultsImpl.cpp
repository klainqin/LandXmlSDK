
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PointResults.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PointResultsTmpl.inl"
namespace LX
{
template class PointResultsTmpl<PointResults>;
PointResultsImpl::PointResultsImpl (DocumentImpl* pDoc)
    : PointResultsTmpl<PointResults>(pDoc)
{
}
}; // namespace : LX
