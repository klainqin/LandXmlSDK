
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "InSpiral.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "InSpiralTmpl.inl"
namespace LX
{
template class InSpiralTmpl<InSpiral>;
InSpiralImpl::InSpiralImpl (DocumentImpl* pDoc)
    : InSpiralTmpl<InSpiral>(pDoc)
{
}
}; // namespace : LX
