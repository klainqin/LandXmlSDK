
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Station.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "StationTmpl.inl"
namespace LX
{
template class StationTmpl<Station>;
StationImpl::StationImpl (DocumentImpl* pDoc)
    : StationTmpl<Station>(pDoc)
{
}
}; // namespace : LX
