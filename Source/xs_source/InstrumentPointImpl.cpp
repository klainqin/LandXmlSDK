
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "InstrumentPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "InstrumentPointTmpl.inl"
namespace LX
{
template class InstrumentPointTmpl<InstrumentPoint>;
InstrumentPointImpl::InstrumentPointImpl (DocumentImpl* pDoc)
    : InstrumentPointTmpl<InstrumentPoint>(pDoc)
{
}
}; // namespace : LX
