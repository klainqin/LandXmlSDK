#if !defined(__DESIGNSPEED85THCOLLECTION_H)
#define __DESIGNSPEED85THCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DesignSpeed85th.h"
namespace LX
{

// Iterator : DesignSpeed85thCollection
class DesignSpeed85thCollectionIterator : public Iterator<DesignSpeed85th*>
{
};

class DesignSpeed85thCollectionConstIterator : public ConstIterator<DesignSpeed85th>
{
};

// Collection : DesignSpeed85thCollection
class DesignSpeed85thCollection : public ObjList<DesignSpeed85th, DesignSpeed85thCollectionIterator, DesignSpeed85thCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
