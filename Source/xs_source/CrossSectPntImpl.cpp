
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSectPnt.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

#include "LXTypesImpl.h"
#include "CrossSectPntTmpl.inl"
namespace LX
{
template class CrossSectPntTmpl<CrossSectPnt>;
CrossSectPntImpl::CrossSectPntImpl (DocumentImpl* pDoc)
    : CrossSectPntTmpl<CrossSectPnt>(pDoc)
{
}
}; // namespace : LX
