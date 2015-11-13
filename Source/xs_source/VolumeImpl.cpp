
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Volume.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "VolumeTmpl.inl"
namespace LX
{
template class VolumeTmpl<Volume>;
VolumeImpl::VolumeImpl (DocumentImpl* pDoc)
    : VolumeTmpl<Volume>(pDoc)
{
}
}; // namespace : LX
