
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Profile.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ProfileTmpl.inl"
namespace LX
{
template class ProfileTmpl<Profile>;
ProfileImpl::ProfileImpl (DocumentImpl* pDoc)
    : ProfileTmpl<Profile>(pDoc)
{
}
}; // namespace : LX
