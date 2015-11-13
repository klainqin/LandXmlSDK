
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CgPoint.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "CgPointTmpl.inl"
namespace LX
{
template class CgPointTmpl<CgPoint>;
CgPointImpl::CgPointImpl (DocumentImpl* pDoc)
    : CgPointTmpl<CgPoint>(pDoc)
{
}
Object* CgPointImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableCgPointCollection());
}
}; // namespace : LX
