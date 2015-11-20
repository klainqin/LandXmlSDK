#if !defined(__COORDGEOMCOLLECTIONIMPL_H)
#define __COORDGEOMCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CoordGeom.h"
#include "CoordGeomCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CoordGeomImpl.h"
#endif

namespace LX
{
CoordGeomCollection* createCoordGeomCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CoordGeomCollectionImpl
class CoordGeomCollectionImpl : public GlobalObjMapTmpl<CoordGeom, CoordGeomCollection, String, CoordGeomCollectionIterator, CoordGeomCollectionConstIterator>
{
public:
    CoordGeomCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
