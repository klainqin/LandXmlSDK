
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Property.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PropertyTmpl.inl"
namespace LX
{
template class PropertyTmpl<Property>;
PropertyImpl::PropertyImpl (DocumentImpl* pDoc)
    : PropertyTmpl<Property>(pDoc)
{
}
}; // namespace : LX
