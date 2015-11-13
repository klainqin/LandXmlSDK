
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "InstrumentDetails.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "InstrumentDetailsTmpl.inl"
namespace LX
{
template class InstrumentDetailsTmpl<InstrumentDetails>;
InstrumentDetailsImpl::InstrumentDetailsImpl (DocumentImpl* pDoc)
    : InstrumentDetailsTmpl<InstrumentDetails>(pDoc)
{
}
}; // namespace : LX
