
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ElliPipe.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ElliPipeTmpl.inl"
namespace LX
{
template class ElliPipeTmpl<ElliPipe>;
ElliPipeImpl::ElliPipeImpl (DocumentImpl* pDoc)
    : ElliPipeTmpl<ElliPipe>(pDoc)
{
}
}; // namespace : LX
