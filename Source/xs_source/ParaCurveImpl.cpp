
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ParaCurve.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ParaCurveTmpl.inl"
namespace LX
{
template class ParaCurveTmpl<ParaCurve>;
ParaCurveImpl::ParaCurveImpl (DocumentImpl* pDoc)
    : ParaCurveTmpl<ParaCurve>(pDoc)
{
}
}; // namespace : LX
