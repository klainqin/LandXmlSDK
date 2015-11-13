#if !defined(__ZONECROSSSECTSTRUCTURECOLLECTION_H)
#define __ZONECROSSSECTSTRUCTURECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ZoneCrossSectStructure.h"
namespace LX
{

// Iterator : ZoneCrossSectStructureCollection
class ZoneCrossSectStructureCollectionIterator : public Iterator<ZoneCrossSectStructure*>
{
};

class ZoneCrossSectStructureCollectionConstIterator : public ConstIterator<ZoneCrossSectStructure>
{
};

// Collection : ZoneCrossSectStructureCollection
class ZoneCrossSectStructureCollection : public Map<ZoneCrossSectStructure, String, ZoneCrossSectStructureCollectionIterator, ZoneCrossSectStructureCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
