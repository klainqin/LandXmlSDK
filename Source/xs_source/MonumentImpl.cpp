
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Monument.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "MonumentTmpl.inl"
namespace LX
{
template class MonumentTmpl<Monument>;
MonumentImpl::MonumentImpl (DocumentImpl* pDoc)
    : MonumentTmpl<Monument>(pDoc)
{
}
Object* MonumentImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableMonumentCollection());
}
}; // namespace : LX
