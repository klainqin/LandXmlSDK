
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "F.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FTmpl.inl"
namespace LX
{
template class FTmpl<F>;
FImpl::FImpl (DocumentImpl* pDoc)
    : FTmpl<F>(pDoc)
{
}
}; // namespace : LX
