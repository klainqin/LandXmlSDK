
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "FeatureDictionary.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "FeatureDictionaryTmpl.inl"
namespace LX
{
template class FeatureDictionaryTmpl<FeatureDictionary>;
FeatureDictionaryImpl::FeatureDictionaryImpl (DocumentImpl* pDoc)
    : FeatureDictionaryTmpl<FeatureDictionary>(pDoc)
{
}
}; // namespace : LX
