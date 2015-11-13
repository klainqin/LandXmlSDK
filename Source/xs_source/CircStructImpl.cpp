
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CircStruct.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CircStructTmpl.inl"
namespace LX
{
template class CircStructTmpl<CircStruct>;
CircStructImpl::CircStructImpl (DocumentImpl* pDoc)
    : CircStructTmpl<CircStruct>(pDoc)
{
}
}; // namespace : LX
