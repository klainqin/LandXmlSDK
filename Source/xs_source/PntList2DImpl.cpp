
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PntList2D.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PntList2DTmpl.inl"
namespace LX
{
template class PntList2DTmpl<PntList2D>;
PntList2DImpl::PntList2DImpl (DocumentImpl* pDoc)
    : PntList2DTmpl<PntList2D>(pDoc)
{
}
}; // namespace : LX
