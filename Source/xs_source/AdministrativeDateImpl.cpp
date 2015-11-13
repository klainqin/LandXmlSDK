
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AdministrativeDate.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AdministrativeDateTmpl.inl"
namespace LX
{
template class AdministrativeDateTmpl<AdministrativeDate>;
AdministrativeDateImpl::AdministrativeDateImpl (DocumentImpl* pDoc)
    : AdministrativeDateTmpl<AdministrativeDate>(pDoc)
{
}
}; // namespace : LX
