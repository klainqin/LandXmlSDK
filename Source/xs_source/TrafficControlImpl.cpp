
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TrafficControl.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TrafficControlTmpl.inl"
namespace LX
{
template class TrafficControlTmpl<TrafficControl>;
TrafficControlImpl::TrafficControlImpl (DocumentImpl* pDoc)
    : TrafficControlTmpl<TrafficControl>(pDoc)
{
}
}; // namespace : LX
