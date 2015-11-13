
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Annotation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AnnotationTmpl.inl"
namespace LX
{
template class AnnotationTmpl<Annotation>;
AnnotationImpl::AnnotationImpl (DocumentImpl* pDoc)
    : AnnotationTmpl<Annotation>(pDoc)
{
}
}; // namespace : LX
