
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "GradeModel.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "GradeModelTmpl.inl"
namespace LX
{
template class GradeModelTmpl<GradeModel>;
GradeModelImpl::GradeModelImpl (DocumentImpl* pDoc)
    : GradeModelTmpl<GradeModel>(pDoc)
{
}
Object* GradeModelImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableGradeModelCollection());
}
}; // namespace : LX
