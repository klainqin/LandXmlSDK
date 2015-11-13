
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "End.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "EndTmpl.inl"
namespace LX
{
template class EndTmpl<End>;
EndImpl::EndImpl (DocumentImpl* pDoc)
    : EndTmpl<End>(pDoc)
{
}
}; // namespace : LX
