
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CircPipe.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CircPipeTmpl.inl"
namespace LX
{
template class CircPipeTmpl<CircPipe>;
CircPipeImpl::CircPipeImpl (DocumentImpl* pDoc)
    : CircPipeTmpl<CircPipe>(pDoc)
{
}
}; // namespace : LX
