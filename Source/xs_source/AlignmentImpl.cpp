
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Alignment.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AlignmentTmpl.inl"
namespace LX
{
template class AlignmentTmpl<Alignment>;
AlignmentImpl::AlignmentImpl (DocumentImpl* pDoc)
    : AlignmentTmpl<Alignment>(pDoc)
{
}
Object* AlignmentImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableAlignmentCollection());
}
}; // namespace : LX
