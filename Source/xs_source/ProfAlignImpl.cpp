
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ProfAlign.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ProfAlignTmpl.inl"
namespace LX
{
template class ProfAlignTmpl<ProfAlign>;
ProfAlignImpl::ProfAlignImpl (DocumentImpl* pDoc)
    : ProfAlignTmpl<ProfAlign>(pDoc)
{
}
}; // namespace : LX
