
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TurnRestriction.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TurnRestrictionTmpl.inl"
namespace LX
{
template class TurnRestrictionTmpl<TurnRestriction>;
TurnRestrictionImpl::TurnRestrictionImpl (DocumentImpl* pDoc)
    : TurnRestrictionTmpl<TurnRestriction>(pDoc)
{
}
}; // namespace : LX
