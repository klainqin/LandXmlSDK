#if !defined(__MONUMENTSCOLLECTION_H)
#define __MONUMENTSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Monuments.h"
namespace LX
{

// Iterator : MonumentsCollection
class MonumentsCollectionIterator : public Iterator<Monuments*>
{
};

class MonumentsCollectionConstIterator : public ConstIterator<Monuments>
{
};

// Collection : MonumentsCollection
class MonumentsCollection : public Map<Monuments, String, MonumentsCollectionIterator, MonumentsCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
