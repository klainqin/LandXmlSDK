#if !defined(__ZONECROSSSECTSTRUCTURECOLLECTIONIMPL_H)
#define __ZONECROSSSECTSTRUCTURECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ZoneCrossSectStructure.h"
#include "ZoneCrossSectStructureCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ZoneCrossSectStructureImpl.h"
#endif

namespace LX
{
ZoneCrossSectStructureCollection* createZoneCrossSectStructureCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ZoneCrossSectStructureCollectionImpl
class ZoneCrossSectStructureCollectionImpl : public NamedObjMultiMapTmpl<ZoneCrossSectStructure, ZoneCrossSectStructureCollection, String, ZoneCrossSectStructureCollectionIterator, ZoneCrossSectStructureCollectionConstIterator>
{
public:
    ZoneCrossSectStructureCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
