
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Alignments.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AlignmentsTmpl.inl"
namespace LX
{
template class AlignmentsTmpl<Alignments>;
AlignmentsImpl::AlignmentsImpl (DocumentImpl* pDoc)
    : AlignmentsTmpl<Alignments>(pDoc)
{
}
}; // namespace : LX
