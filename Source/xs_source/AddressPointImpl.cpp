
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AddressPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "AddressPointTmpl.inl"
namespace LX
{
template class AddressPointTmpl<AddressPoint>;
AddressPointImpl::AddressPointImpl (DocumentImpl* pDoc)
    : AddressPointTmpl<AddressPoint>(pDoc)
{
}
}; // namespace : LX
