
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Contours.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ContoursTmpl.inl"
namespace LX
{
template class ContoursTmpl<Contours>;
ContoursImpl::ContoursImpl (DocumentImpl* pDoc)
    : ContoursTmpl<Contours>(pDoc)
{
}
}; // namespace : LX
