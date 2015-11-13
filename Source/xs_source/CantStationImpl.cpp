
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CantStation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CantStationTmpl.inl"
namespace LX
{
template class CantStationTmpl<CantStation>;
CantStationImpl::CantStationImpl (DocumentImpl* pDoc)
    : CantStationTmpl<CantStation>(pDoc)
{
}
}; // namespace : LX
