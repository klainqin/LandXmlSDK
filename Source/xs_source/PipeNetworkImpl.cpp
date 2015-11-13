
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PipeNetwork.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PipeNetworkTmpl.inl"
namespace LX
{
template class PipeNetworkTmpl<PipeNetwork>;
PipeNetworkImpl::PipeNetworkImpl (DocumentImpl* pDoc)
    : PipeNetworkTmpl<PipeNetwork>(pDoc)
{
}
Object* PipeNetworkImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritablePipeNetworkCollection());
}
}; // namespace : LX
