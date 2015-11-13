
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Title.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "TitleTmpl.inl"
namespace LX
{
template class TitleTmpl<Title>;
TitleImpl::TitleImpl (DocumentImpl* pDoc)
    : TitleTmpl<Title>(pDoc)
{
}
}; // namespace : LX
