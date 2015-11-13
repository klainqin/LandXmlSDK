
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "LaserSetup.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "LaserSetupTmpl.inl"
namespace LX
{
template class LaserSetupTmpl<LaserSetup>;
LaserSetupImpl::LaserSetupImpl (DocumentImpl* pDoc)
    : LaserSetupTmpl<LaserSetup>(pDoc)
{
}
}; // namespace : LX
