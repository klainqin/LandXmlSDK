
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Curve2.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "Curve2Tmpl.inl"
namespace LX
{
template class Curve2Tmpl<Curve2>;
Curve2Impl::Curve2Impl (DocumentImpl* pDoc)
    : Curve2Tmpl<Curve2>(pDoc)
{
}
}; // namespace : LX
