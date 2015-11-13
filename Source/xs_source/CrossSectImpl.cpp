
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSect.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CrossSectTmpl.inl"
namespace LX
{
template class CrossSectTmpl<CrossSect>;
CrossSectImpl::CrossSectImpl (DocumentImpl* pDoc)
    : CrossSectTmpl<CrossSect>(pDoc)
{
}
}; // namespace : LX
