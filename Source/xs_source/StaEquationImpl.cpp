
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "StaEquation.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "StaEquationTmpl.inl"
namespace LX
{
template class StaEquationTmpl<StaEquation>;
StaEquationImpl::StaEquationImpl (DocumentImpl* pDoc)
    : StaEquationTmpl<StaEquation>(pDoc)
{
}
}; // namespace : LX
