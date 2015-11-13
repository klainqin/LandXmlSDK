
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Corner.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CornerTmpl.inl"
namespace LX
{
template class CornerTmpl<Corner>;
CornerImpl::CornerImpl (DocumentImpl* pDoc)
    : CornerTmpl<Corner>(pDoc)
{
}
}; // namespace : LX
