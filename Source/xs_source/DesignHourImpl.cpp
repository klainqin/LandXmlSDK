
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DesignHour.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DesignHourTmpl.inl"
namespace LX
{
template class DesignHourTmpl<DesignHour>;
DesignHourImpl::DesignHourImpl (DocumentImpl* pDoc)
    : DesignHourTmpl<DesignHour>(pDoc)
{
}
}; // namespace : LX
