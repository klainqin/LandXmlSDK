
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Structs.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "StructsTmpl.inl"
namespace LX
{
template class StructsTmpl<Structs>;
StructsImpl::StructsImpl (DocumentImpl* pDoc)
    : StructsTmpl<Structs>(pDoc)
{
}
}; // namespace : LX
