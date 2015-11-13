
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CircCurve.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CircCurveTmpl.inl"
namespace LX
{
template class CircCurveTmpl<CircCurve>;
CircCurveImpl::CircCurveImpl (DocumentImpl* pDoc)
    : CircCurveTmpl<CircCurve>(pDoc)
{
}
}; // namespace : LX
