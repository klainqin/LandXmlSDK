
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Curve.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CurveTmpl.inl"
namespace LX
{
template class CurveTmpl<Curve>;
CurveImpl::CurveImpl (DocumentImpl* pDoc)
    : CurveTmpl<Curve>(pDoc)
{
}
}; // namespace : LX
