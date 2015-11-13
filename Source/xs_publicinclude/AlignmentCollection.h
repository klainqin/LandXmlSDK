#if !defined(__ALIGNMENTCOLLECTION_H)
#define __ALIGNMENTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Alignment.h"
namespace LX
{

// Iterator : AlignmentCollection
class AlignmentCollectionIterator : public Iterator<Alignment*>
{
};

class AlignmentCollectionConstIterator : public ConstIterator<Alignment>
{
};

// Collection : AlignmentCollection
class AlignmentCollection : public Map<Alignment, String, AlignmentCollectionIterator, AlignmentCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
