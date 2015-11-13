
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "OutSpiral.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "OutSpiralTmpl.inl"
namespace LX
{
template class OutSpiralTmpl<OutSpiral>;
OutSpiralImpl::OutSpiralImpl (DocumentImpl* pDoc)
    : OutSpiralTmpl<OutSpiral>(pDoc)
{
}
}; // namespace : LX
