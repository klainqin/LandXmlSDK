
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Channel.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ChannelTmpl.inl"
namespace LX
{
template class ChannelTmpl<Channel>;
ChannelImpl::ChannelImpl (DocumentImpl* pDoc)
    : ChannelTmpl<Channel>(pDoc)
{
}
}; // namespace : LX
