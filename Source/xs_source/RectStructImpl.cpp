
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "RectStruct.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "RectStructTmpl.inl"
namespace LX
{
template class RectStructTmpl<RectStruct>;
RectStructImpl::RectStructImpl (DocumentImpl* pDoc)
    : RectStructTmpl<RectStruct>(pDoc)
{
}
}; // namespace : LX
