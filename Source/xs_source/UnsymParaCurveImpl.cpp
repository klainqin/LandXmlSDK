
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "UnsymParaCurve.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "UnsymParaCurveTmpl.inl"
namespace LX
{
template class UnsymParaCurveTmpl<UnsymParaCurve>;
UnsymParaCurveImpl::UnsymParaCurveImpl (DocumentImpl* pDoc)
    : UnsymParaCurveTmpl<UnsymParaCurve>(pDoc)
{
}
}; // namespace : LX
