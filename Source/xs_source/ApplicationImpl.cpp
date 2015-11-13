
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Application.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ApplicationTmpl.inl"
namespace LX
{
template class ApplicationTmpl<Application>;
ApplicationImpl::ApplicationImpl (DocumentImpl* pDoc)
    : ApplicationTmpl<Application>(pDoc)
{
}
}; // namespace : LX
