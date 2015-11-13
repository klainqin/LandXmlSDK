
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GPSReceiverDetails.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GPSReceiverDetailsTmpl.inl"
namespace LX
{
template class GPSReceiverDetailsTmpl<GPSReceiverDetails>;
GPSReceiverDetailsImpl::GPSReceiverDetailsImpl (DocumentImpl* pDoc)
    : GPSReceiverDetailsTmpl<GPSReceiverDetails>(pDoc)
{
}
}; // namespace : LX
