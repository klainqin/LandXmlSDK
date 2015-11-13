
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AmendmentItem.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AmendmentItemTmpl.inl"
namespace LX
{
template class AmendmentItemTmpl<AmendmentItem>;
AmendmentItemImpl::AmendmentItemImpl (DocumentImpl* pDoc)
    : AmendmentItemTmpl<AmendmentItem>(pDoc)
{
}
}; // namespace : LX
