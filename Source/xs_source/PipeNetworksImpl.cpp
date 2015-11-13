
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PipeNetworks.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PipeNetworksTmpl.inl"
namespace LX
{
template class PipeNetworksTmpl<PipeNetworks>;
PipeNetworksImpl::PipeNetworksImpl (DocumentImpl* pDoc)
    : PipeNetworksTmpl<PipeNetworks>(pDoc)
{
}
}; // namespace : LX
