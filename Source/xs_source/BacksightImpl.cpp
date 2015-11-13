
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Backsight.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BacksightTmpl.inl"
namespace LX
{
template class BacksightTmpl<Backsight>;
BacksightImpl::BacksightImpl (DocumentImpl* pDoc)
    : BacksightTmpl<Backsight>(pDoc)
{
}
}; // namespace : LX
