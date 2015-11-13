#if !defined(__ADVERSESECOLLECTION_H)
#define __ADVERSESECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "AdverseSE.h"
namespace LX
{

// Iterator : AdverseSECollection
class AdverseSECollectionIterator : public Iterator<AdverseSE*>
{
};

class AdverseSECollectionConstIterator : public ConstIterator<AdverseSE>
{
};

// Collection : AdverseSECollection
class AdverseSECollection : public ObjList<AdverseSE, AdverseSECollectionIterator, AdverseSECollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
