#if !defined(__ZONEMATERIALCOLLECTION_H)
#define __ZONEMATERIALCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ZoneMaterial.h"
namespace LX
{

// Iterator : ZoneMaterialCollection
class ZoneMaterialCollectionIterator : public Iterator<ZoneMaterial*>
{
};

class ZoneMaterialCollectionConstIterator : public ConstIterator<ZoneMaterial>
{
};

// Collection : ZoneMaterialCollection
class ZoneMaterialCollection : public ObjList<ZoneMaterial, ZoneMaterialCollectionIterator, ZoneMaterialCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
