
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Parcel.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ParcelTmpl.inl"
namespace LX
{
template class ParcelTmpl<Parcel>;
ParcelImpl::ParcelImpl (DocumentImpl* pDoc)
    : ParcelTmpl<Parcel>(pDoc)
{
}
Object* ParcelImpl::getGlobalCollection ()
{
	return &(m_pDoc->getGlobalObjectsImpl().getWritableParcelCollection());
}
}; // namespace : LX
