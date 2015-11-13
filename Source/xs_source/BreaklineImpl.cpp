
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Breakline.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BreaklineTmpl.inl"
namespace LX
{
template class BreaklineTmpl<Breakline>;
BreaklineImpl::BreaklineImpl (DocumentImpl* pDoc)
    : BreaklineTmpl<Breakline>(pDoc)
{
}
}; // namespace : LX
