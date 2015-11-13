
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RedHorizontalPosition.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RedHorizontalPositionTmpl.inl"
namespace LX
{
template class RedHorizontalPositionTmpl<RedHorizontalPosition>;
RedHorizontalPositionImpl::RedHorizontalPositionImpl (DocumentImpl* pDoc)
    : RedHorizontalPositionTmpl<RedHorizontalPosition>(pDoc)
{
}
}; // namespace : LX
