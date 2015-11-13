
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Spiral.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SpiralTmpl.inl"
namespace LX
{
template class SpiralTmpl<Spiral>;
SpiralImpl::SpiralImpl (DocumentImpl* pDoc)
    : SpiralTmpl<Spiral>(pDoc)
{
}
}; // namespace : LX
