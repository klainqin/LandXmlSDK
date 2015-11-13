
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ZoneCrossSectStructure.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ZoneCrossSectStructureTmpl.inl"
namespace LX
{
template class ZoneCrossSectStructureTmpl<ZoneCrossSectStructure>;
ZoneCrossSectStructureImpl::ZoneCrossSectStructureImpl (DocumentImpl* pDoc)
    : ZoneCrossSectStructureTmpl<ZoneCrossSectStructure>(pDoc)
{
}
}; // namespace : LX
