
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AdverseSE.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AdverseSETmpl.inl"
namespace LX
{
template class AdverseSETmpl<AdverseSE>;
AdverseSEImpl::AdverseSEImpl (DocumentImpl* pDoc)
    : AdverseSETmpl<AdverseSE>(pDoc)
{
}
}; // namespace : LX
