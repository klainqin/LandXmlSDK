#if !defined(__PROFSURFCOLLECTIONIMPL_H)
#define __PROFSURFCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ProfSurf.h"
#include "ProfSurfCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ProfSurfImpl.h"
#endif

namespace LX
{
ProfSurfCollection* createProfSurfCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ProfSurfCollectionImpl
class ProfSurfCollectionImpl : public NamedObjMultiMapTmpl<ProfSurf, ProfSurfCollection, String, ProfSurfCollectionIterator, ProfSurfCollectionConstIterator>
{
public:
    ProfSurfCollectionImpl::ProfSurfCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
