
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Superelevation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SuperelevationTmpl.inl"
namespace LX
{
template class SuperelevationTmpl<Superelevation>;
SuperelevationImpl::SuperelevationImpl (DocumentImpl* pDoc)
    : SuperelevationTmpl<Superelevation>(pDoc)
{
}
}; // namespace : LX
