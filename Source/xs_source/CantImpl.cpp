
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Cant.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CantTmpl.inl"
namespace LX
{
template class CantTmpl<Cant>;
CantImpl::CantImpl (DocumentImpl* pDoc)
    : CantTmpl<Cant>(pDoc)
{
}
}; // namespace : LX
