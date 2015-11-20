#if !defined(__CROSSSECTCOLLECTIONIMPL_H)
#define __CROSSSECTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CrossSect.h"
#include "CrossSectCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CrossSectImpl.h"
#endif

namespace LX
{
CrossSectCollection* createCrossSectCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CrossSectCollectionImpl
class CrossSectCollectionImpl : public NamedObjMultiMapTmpl<CrossSect, CrossSectCollection, String, CrossSectCollectionIterator, CrossSectCollectionConstIterator>
{
public:
    CrossSectCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
