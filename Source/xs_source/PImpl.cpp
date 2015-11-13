
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "P.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "PTmpl.inl"
namespace LX
{
template class PTmpl<P>;
PImpl::PImpl (DocumentImpl* pDoc)
    : PTmpl<P>(pDoc)
{
}
}; // namespace : LX
