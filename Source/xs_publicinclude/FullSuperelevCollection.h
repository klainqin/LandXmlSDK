#if !defined(__FULLSUPERELEVCOLLECTION_H)
#define __FULLSUPERELEVCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "FullSuperelev.h"
namespace LX
{

// Iterator : FullSuperelevCollection
class FullSuperelevCollectionIterator : public Iterator<FullSuperelev*>
{
};

class FullSuperelevCollectionConstIterator : public ConstIterator<FullSuperelev>
{
};

// Collection : FullSuperelevCollection
class FullSuperelevCollection : public ObjList<FullSuperelev, FullSuperelevCollectionIterator, FullSuperelevCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
