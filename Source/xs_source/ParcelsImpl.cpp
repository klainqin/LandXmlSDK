
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Parcels.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ParcelsTmpl.inl"
namespace LX
{
template class ParcelsTmpl<Parcels>;
ParcelsImpl::ParcelsImpl (DocumentImpl* pDoc)
    : ParcelsTmpl<Parcels>(pDoc)
{
}
}; // namespace : LX
