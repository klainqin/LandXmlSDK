
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AlignPI.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AlignPITmpl.inl"
namespace LX
{
template class AlignPITmpl<AlignPI>;
AlignPIImpl::AlignPIImpl (DocumentImpl* pDoc)
    : AlignPITmpl<AlignPI>(pDoc)
{
}
}; // namespace : LX
