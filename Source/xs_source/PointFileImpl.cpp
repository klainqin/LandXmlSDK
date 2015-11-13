
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PointFile.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PointFileTmpl.inl"
namespace LX
{
template class PointFileTmpl<PointFile>;
PointFileImpl::PointFileImpl (DocumentImpl* pDoc)
    : PointFileTmpl<PointFile>(pDoc)
{
}
}; // namespace : LX
