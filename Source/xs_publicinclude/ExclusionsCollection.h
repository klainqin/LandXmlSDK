#if !defined(__EXCLUSIONSCOLLECTION_H)
#define __EXCLUSIONSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Exclusions.h"
namespace LX
{

// Iterator : ExclusionsCollection
class ExclusionsCollectionIterator : public Iterator<Exclusions*>
{
};

class ExclusionsCollectionConstIterator : public ConstIterator<Exclusions>
{
};

// Collection : ExclusionsCollection
class ExclusionsCollection : public ObjList<Exclusions, ExclusionsCollectionIterator, ExclusionsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
