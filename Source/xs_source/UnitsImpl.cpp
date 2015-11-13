
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Units.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "UnitsTmpl.inl"
namespace LX
{
template class UnitsTmpl<Units>;
UnitsImpl::UnitsImpl (DocumentImpl* pDoc)
    : UnitsTmpl<Units>(pDoc)
{
}
}; // namespace : LX
