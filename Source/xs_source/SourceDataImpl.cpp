
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SourceData.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SourceDataTmpl.inl"
namespace LX
{
template class SourceDataTmpl<SourceData>;
SourceDataImpl::SourceDataImpl (DocumentImpl* pDoc)
    : SourceDataTmpl<SourceData>(pDoc)
{
}
}; // namespace : LX
