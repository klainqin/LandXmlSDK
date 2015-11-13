
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "DesignSpeed85th.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "DesignSpeed85thTmpl.inl"
namespace LX
{
template class DesignSpeed85thTmpl<DesignSpeed85th>;
DesignSpeed85thImpl::DesignSpeed85thImpl (DocumentImpl* pDoc)
    : DesignSpeed85thTmpl<DesignSpeed85th>(pDoc)
{
}
}; // namespace : LX
