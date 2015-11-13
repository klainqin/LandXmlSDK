
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Curve1.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "Curve1Tmpl.inl"
namespace LX
{
template class Curve1Tmpl<Curve1>;
Curve1Impl::Curve1Impl (DocumentImpl* pDoc)
    : Curve1Tmpl<Curve1>(pDoc)
{
}
}; // namespace : LX
