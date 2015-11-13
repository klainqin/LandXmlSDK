#if !defined(__ALIGNMENTSCOLLECTION_H)
#define __ALIGNMENTSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Alignments.h"
namespace LX
{

// Iterator : AlignmentsCollection
class AlignmentsCollectionIterator : public Iterator<Alignments*>
{
};

class AlignmentsCollectionConstIterator : public ConstIterator<Alignments>
{
};

// Collection : AlignmentsCollection
class AlignmentsCollection : public Map<Alignments, String, AlignmentsCollectionIterator, AlignmentsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
