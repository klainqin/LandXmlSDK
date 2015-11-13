
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Project.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ProjectTmpl.inl"
namespace LX
{
template class ProjectTmpl<Project>;
ProjectImpl::ProjectImpl (DocumentImpl* pDoc)
    : ProjectTmpl<Project>(pDoc)
{
}
}; // namespace : LX
