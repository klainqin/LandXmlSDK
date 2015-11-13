
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "BridgeElement.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "BridgeElementTmpl.inl"
namespace LX
{
template class BridgeElementTmpl<BridgeElement>;
BridgeElementImpl::BridgeElementImpl (DocumentImpl* pDoc)
    : BridgeElementTmpl<BridgeElement>(pDoc)
{
}
}; // namespace : LX
