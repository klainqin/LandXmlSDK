
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RectPipe.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RectPipeTmpl.inl"
namespace LX
{
template class RectPipeTmpl<RectPipe>;
RectPipeImpl::RectPipeImpl (DocumentImpl* pDoc)
    : RectPipeTmpl<RectPipe>(pDoc)
{
}
}; // namespace : LX
