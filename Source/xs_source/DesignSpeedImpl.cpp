
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DesignSpeed.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DesignSpeedTmpl.inl"
namespace LX
{
template class DesignSpeedTmpl<DesignSpeed>;
DesignSpeedImpl::DesignSpeedImpl (DocumentImpl* pDoc)
    : DesignSpeedTmpl<DesignSpeed>(pDoc)
{
}
}; // namespace : LX
