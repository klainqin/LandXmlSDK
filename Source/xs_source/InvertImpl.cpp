
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Invert.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "InvertTmpl.inl"
namespace LX
{
template class InvertTmpl<Invert>;
InvertImpl::InvertImpl (DocumentImpl* pDoc)
    : InvertTmpl<Invert>(pDoc)
{
}
}; // namespace : LX
