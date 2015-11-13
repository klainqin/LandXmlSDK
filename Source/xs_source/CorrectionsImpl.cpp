
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Corrections.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CorrectionsTmpl.inl"
namespace LX
{
template class CorrectionsTmpl<Corrections>;
CorrectionsImpl::CorrectionsImpl (DocumentImpl* pDoc)
    : CorrectionsTmpl<Corrections>(pDoc)
{
}
}; // namespace : LX
