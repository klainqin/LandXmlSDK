
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Personnel.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PersonnelTmpl.inl"
namespace LX
{
template class PersonnelTmpl<Personnel>;
PersonnelImpl::PersonnelImpl (DocumentImpl* pDoc)
    : PersonnelTmpl<Personnel>(pDoc)
{
}
}; // namespace : LX
