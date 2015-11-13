
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "CrossSectSurf.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "CrossSectSurfTmpl.inl"
namespace LX
{
template class CrossSectSurfTmpl<CrossSectSurf>;
CrossSectSurfImpl::CrossSectSurfImpl (DocumentImpl* pDoc)
    : CrossSectSurfTmpl<CrossSectSurf>(pDoc)
{
}
}; // namespace : LX
