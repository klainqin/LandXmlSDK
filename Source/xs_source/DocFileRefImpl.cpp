
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DocFileRef.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DocFileRefTmpl.inl"
namespace LX
{
template class DocFileRefTmpl<DocFileRef>;
DocFileRefImpl::DocFileRefImpl (DocumentImpl* pDoc)
    : DocFileRefTmpl<DocFileRef>(pDoc)
{
}
}; // namespace : LX
