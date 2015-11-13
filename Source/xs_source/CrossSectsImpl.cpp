
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSects.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CrossSectsTmpl.inl"
namespace LX
{
template class CrossSectsTmpl<CrossSects>;
CrossSectsImpl::CrossSectsImpl (DocumentImpl* pDoc)
    : CrossSectsTmpl<CrossSects>(pDoc)
{
}
}; // namespace : LX
