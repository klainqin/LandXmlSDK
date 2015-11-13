
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "AdministrativeArea.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "AdministrativeAreaTmpl.inl"
namespace LX
{
template class AdministrativeAreaTmpl<AdministrativeArea>;
AdministrativeAreaImpl::AdministrativeAreaImpl (DocumentImpl* pDoc)
    : AdministrativeAreaTmpl<AdministrativeArea>(pDoc)
{
}
}; // namespace : LX
