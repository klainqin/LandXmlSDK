
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Pnts.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PntsTmpl.inl"
namespace LX
{
template class PntsTmpl<Pnts>;
PntsImpl::PntsImpl (DocumentImpl* pDoc)
    : PntsTmpl<Pnts>(pDoc)
{
}
}; // namespace : LX
