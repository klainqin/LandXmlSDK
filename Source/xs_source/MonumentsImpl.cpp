
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Monuments.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "MonumentsTmpl.inl"
namespace LX
{
template class MonumentsTmpl<Monuments>;
MonumentsImpl::MonumentsImpl (DocumentImpl* pDoc)
    : MonumentsTmpl<Monuments>(pDoc)
{
}
}; // namespace : LX
