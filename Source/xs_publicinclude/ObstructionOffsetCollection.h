#if !defined(__OBSTRUCTIONOFFSETCOLLECTION_H)
#define __OBSTRUCTIONOFFSETCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ObstructionOffset.h"
namespace LX
{

// Iterator : ObstructionOffsetCollection
class ObstructionOffsetCollectionIterator : public Iterator<ObstructionOffset*>
{
};

class ObstructionOffsetCollectionConstIterator : public ConstIterator<ObstructionOffset>
{
};

// Collection : ObstructionOffsetCollection
class ObstructionOffsetCollection : public ObjList<ObstructionOffset, ObstructionOffsetCollectionIterator, ObstructionOffsetCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
