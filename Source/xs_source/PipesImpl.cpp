
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Pipes.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PipesTmpl.inl"
namespace LX
{
template class PipesTmpl<Pipes>;
PipesImpl::PipesImpl (DocumentImpl* pDoc)
    : PipesTmpl<Pipes>(pDoc)
{
}
}; // namespace : LX
