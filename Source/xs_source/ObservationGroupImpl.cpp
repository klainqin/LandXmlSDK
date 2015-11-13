
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ObservationGroup.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ObservationGroupTmpl.inl"
namespace LX
{
template class ObservationGroupTmpl<ObservationGroup>;
ObservationGroupImpl::ObservationGroupImpl (DocumentImpl* pDoc)
    : ObservationGroupTmpl<ObservationGroup>(pDoc)
{
}
}; // namespace : LX
