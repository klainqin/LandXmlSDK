#if !defined(__FULLSUPERSTACOLLECTION_H)
#define __FULLSUPERSTACOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "FullSuperSta.h"
namespace LX
{

// Iterator : FullSuperStaCollection
class FullSuperStaCollectionIterator : public Iterator<FullSuperSta*>
{
};

class FullSuperStaCollectionConstIterator : public ConstIterator<FullSuperSta>
{
};

// Collection : FullSuperStaCollection
class FullSuperStaCollection : public ObjList<FullSuperSta, FullSuperStaCollectionIterator, FullSuperStaCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
