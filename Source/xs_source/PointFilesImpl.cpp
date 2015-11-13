
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PointFiles.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PointFilesTmpl.inl"
namespace LX
{
template class PointFilesTmpl<PointFiles>;
PointFilesImpl::PointFilesImpl (DocumentImpl* pDoc)
    : PointFilesTmpl<PointFiles>(pDoc)
{
}
}; // namespace : LX
