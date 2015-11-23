#if !defined(__ROADSIDECOLLECTIONIMPL_H)
#define __ROADSIDECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Roadside.h"
#include "RoadsideCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "RoadsideImpl.h"
#endif

namespace LX
{
RoadsideCollection* createRoadsideCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : RoadsideCollectionImpl
class RoadsideCollectionImpl : public ObjListTmpl<Roadside, RoadsideCollection, RoadsideCollectionIterator, RoadsideCollectionConstIterator>
{
public:
    RoadsideCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
