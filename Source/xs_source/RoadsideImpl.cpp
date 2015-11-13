
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Roadside.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RoadsideTmpl.inl"
namespace LX
{
template class RoadsideTmpl<Roadside>;
RoadsideImpl::RoadsideImpl (DocumentImpl* pDoc)
    : RoadsideTmpl<Roadside>(pDoc)
{
}
}; // namespace : LX
