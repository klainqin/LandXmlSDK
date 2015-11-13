
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PointType.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PointTypeTmpl.inl"
namespace LX
{
template class PointTypeTmpl<PointType>;
PointTypeImpl::PointTypeImpl (DocumentImpl* pDoc)
    : PointTypeTmpl<PointType>(pDoc)
{
}
}; // namespace : LX
