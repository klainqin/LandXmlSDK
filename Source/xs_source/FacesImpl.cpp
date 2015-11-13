
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Faces.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FacesTmpl.inl"
namespace LX
{
template class FacesTmpl<Faces>;
FacesImpl::FacesImpl (DocumentImpl* pDoc)
    : FacesTmpl<Faces>(pDoc)
{
}
}; // namespace : LX
