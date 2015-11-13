
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Chain.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "ChainTmpl.inl"
namespace LX
{
template class ChainTmpl<Chain>;
ChainImpl::ChainImpl (DocumentImpl* pDoc)
    : ChainTmpl<Chain>(pDoc)
{
}
}; // namespace : LX
