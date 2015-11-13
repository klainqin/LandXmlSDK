
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Pipe.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PipeTmpl.inl"
namespace LX
{
template class PipeTmpl<Pipe>;
PipeImpl::PipeImpl (DocumentImpl* pDoc)
    : PipeTmpl<Pipe>(pDoc)
{
}
Object* PipeImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritablePipeCollection());
}
}; // namespace : LX
