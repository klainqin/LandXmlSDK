#if !defined(__DITCHCOLLECTION_H)
#define __DITCHCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Ditch.h"
namespace LX
{

// Iterator : DitchCollection
class DitchCollectionIterator : public Iterator<Ditch*>
{
};

class DitchCollectionConstIterator : public ConstIterator<Ditch>
{
};

// Collection : DitchCollection
class DitchCollection : public ObjList<Ditch, DitchCollectionIterator, DitchCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
