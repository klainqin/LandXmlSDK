
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Start.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "StartTmpl.inl"
namespace LX
{
template class StartTmpl<Start>;
StartImpl::StartImpl (DocumentImpl* pDoc)
    : StartTmpl<Start>(pDoc)
{
}
}; // namespace : LX
