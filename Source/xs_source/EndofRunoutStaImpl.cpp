
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "EndofRunoutSta.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "EndofRunoutStaTmpl.inl"
namespace LX
{
template class EndofRunoutStaTmpl<EndofRunoutSta>;
EndofRunoutStaImpl::EndofRunoutStaImpl (DocumentImpl* pDoc)
    : EndofRunoutStaTmpl<EndofRunoutSta>(pDoc)
{
}
}; // namespace : LX
