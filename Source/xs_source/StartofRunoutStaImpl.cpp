
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "StartofRunoutSta.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "StartofRunoutStaTmpl.inl"
namespace LX
{
template class StartofRunoutStaTmpl<StartofRunoutSta>;
StartofRunoutStaImpl::StartofRunoutStaImpl (DocumentImpl* pDoc)
    : StartofRunoutStaTmpl<StartofRunoutSta>(pDoc)
{
}
}; // namespace : LX
