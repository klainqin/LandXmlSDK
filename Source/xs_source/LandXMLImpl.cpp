
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "LandXML.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "LandXMLTmpl.inl"
namespace LX
{
template class LandXMLTmpl<LandXML>;
LandXMLImpl::LandXMLImpl (DocumentImpl* pDoc)
    : LandXMLTmpl<LandXML>(pDoc)
{
}
}; // namespace : LX
