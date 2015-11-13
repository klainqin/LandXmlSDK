
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "OutletStruct.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "OutletStructTmpl.inl"
namespace LX
{
template class OutletStructTmpl<OutletStruct>;
OutletStructImpl::OutletStructImpl (DocumentImpl* pDoc)
    : OutletStructTmpl<OutletStruct>(pDoc)
{
}
}; // namespace : LX
