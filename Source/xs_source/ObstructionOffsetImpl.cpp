
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ObstructionOffset.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ObstructionOffsetTmpl.inl"
namespace LX
{
template class ObstructionOffsetTmpl<ObstructionOffset>;
ObstructionOffsetImpl::ObstructionOffsetImpl (DocumentImpl* pDoc)
    : ObstructionOffsetTmpl<ObstructionOffset>(pDoc)
{
}
}; // namespace : LX
