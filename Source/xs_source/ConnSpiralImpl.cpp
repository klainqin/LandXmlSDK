
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ConnSpiral.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ConnSpiralTmpl.inl"
namespace LX
{
template class ConnSpiralTmpl<ConnSpiral>;
ConnSpiralImpl::ConnSpiralImpl (DocumentImpl* pDoc)
    : ConnSpiralTmpl<ConnSpiral>(pDoc)
{
}
}; // namespace : LX
