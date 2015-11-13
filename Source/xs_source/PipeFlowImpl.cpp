
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PipeFlow.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PipeFlowTmpl.inl"
namespace LX
{
template class PipeFlowTmpl<PipeFlow>;
PipeFlowImpl::PipeFlowImpl (DocumentImpl* pDoc)
    : PipeFlowTmpl<PipeFlow>(pDoc)
{
}
}; // namespace : LX
