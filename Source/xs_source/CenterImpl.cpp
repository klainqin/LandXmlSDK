
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Center.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "CenterTmpl.inl"
namespace LX
{
template class CenterTmpl<Center>;
CenterImpl::CenterImpl (DocumentImpl* pDoc)
    : CenterTmpl<Center>(pDoc)
{
}
}; // namespace : LX
