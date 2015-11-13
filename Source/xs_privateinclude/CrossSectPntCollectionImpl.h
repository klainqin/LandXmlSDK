#if !defined(__CROSSSECTPNTCOLLECTIONIMPL_H)
#define __CROSSSECTPNTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CrossSectPnt.h"
#include "CrossSectPntCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CrossSectPntImpl.h"
#endif

namespace LX
{
CrossSectPntCollection* createCrossSectPntCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CrossSectPntCollectionImpl
class CrossSectPntCollectionImpl : public NamedObjMultiMapTmpl<CrossSectPnt, CrossSectPntCollection, String, CrossSectPntCollectionIterator, CrossSectPntCollectionConstIterator>
{
public:
    CrossSectPntCollectionImpl::CrossSectPntCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
