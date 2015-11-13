
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "StructFlow.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "StructFlowTmpl.inl"
namespace LX
{
template class StructFlowTmpl<StructFlow>;
StructFlowImpl::StructFlowImpl (DocumentImpl* pDoc)
    : StructFlowTmpl<StructFlow>(pDoc)
{
}
}; // namespace : LX
