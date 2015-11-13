
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Ditch.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DitchTmpl.inl"
namespace LX
{
template class DitchTmpl<Ditch>;
DitchImpl::DitchImpl (DocumentImpl* pDoc)
    : DitchTmpl<Ditch>(pDoc)
{
}
}; // namespace : LX
