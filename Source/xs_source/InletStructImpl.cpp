
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "InletStruct.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "InletStructTmpl.inl"
namespace LX
{
template class InletStructTmpl<InletStruct>;
InletStructImpl::InletStructImpl (DocumentImpl* pDoc)
    : InletStructTmpl<InletStruct>(pDoc)
{
}
}; // namespace : LX
