
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Equipment.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "EquipmentTmpl.inl"
namespace LX
{
template class EquipmentTmpl<Equipment>;
EquipmentImpl::EquipmentImpl (DocumentImpl* pDoc)
    : EquipmentTmpl<Equipment>(pDoc)
{
}
}; // namespace : LX
