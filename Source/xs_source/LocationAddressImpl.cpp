
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "LocationAddress.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "LocationAddressTmpl.inl"
namespace LX
{
template class LocationAddressTmpl<LocationAddress>;
LocationAddressImpl::LocationAddressImpl (DocumentImpl* pDoc)
    : LocationAddressTmpl<LocationAddress>(pDoc)
{
}
}; // namespace : LX
