
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RetWall.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RetWallTmpl.inl"
namespace LX
{
template class RetWallTmpl<RetWall>;
RetWallImpl::RetWallImpl (DocumentImpl* pDoc)
    : RetWallTmpl<RetWall>(pDoc)
{
}
}; // namespace : LX
