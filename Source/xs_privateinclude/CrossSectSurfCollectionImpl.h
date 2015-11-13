#if !defined(__CROSSSECTSURFCOLLECTIONIMPL_H)
#define __CROSSSECTSURFCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CrossSectSurf.h"
#include "CrossSectSurfCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CrossSectSurfImpl.h"
#endif

namespace LX
{
CrossSectSurfCollection* createCrossSectSurfCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CrossSectSurfCollectionImpl
class CrossSectSurfCollectionImpl : public NamedObjMultiMapTmpl<CrossSectSurf, CrossSectSurfCollection, String, CrossSectSurfCollectionIterator, CrossSectSurfCollectionConstIterator>
{
public:
    CrossSectSurfCollectionImpl::CrossSectSurfCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
