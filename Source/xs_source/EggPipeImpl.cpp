
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "EggPipe.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "EggPipeTmpl.inl"
namespace LX
{
template class EggPipeTmpl<EggPipe>;
EggPipeImpl::EggPipeImpl (DocumentImpl* pDoc)
    : EggPipeTmpl<EggPipe>(pDoc)
{
}
}; // namespace : LX
