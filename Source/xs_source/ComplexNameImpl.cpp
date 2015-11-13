
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "ComplexName.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ComplexNameTmpl.inl"
namespace LX
{
template class ComplexNameTmpl<ComplexName>;
ComplexNameImpl::ComplexNameImpl (DocumentImpl* pDoc)
    : ComplexNameTmpl<ComplexName>(pDoc)
{
}
}; // namespace : LX
