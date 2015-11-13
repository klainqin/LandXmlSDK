
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Struct.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "StructTmpl.inl"
namespace LX
{
template class StructTmpl<Struct>;
StructImpl::StructImpl (DocumentImpl* pDoc)
    : StructTmpl<Struct>(pDoc)
{
}
Object* StructImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableStructCollection());
}
}; // namespace : LX
