
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PntList3D.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PntList3DTmpl.inl"
namespace LX
{
template class PntList3DTmpl<PntList3D>;
PntList3DImpl::PntList3DImpl (DocumentImpl* pDoc)
    : PntList3DTmpl<PntList3D>(pDoc)
{
}
}; // namespace : LX
