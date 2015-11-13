
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Classification.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ClassificationTmpl.inl"
namespace LX
{
template class ClassificationTmpl<Classification>;
ClassificationImpl::ClassificationImpl (DocumentImpl* pDoc)
    : ClassificationTmpl<Classification>(pDoc)
{
}
}; // namespace : LX
