#if !defined(__AMENDMENTCOLLECTION_H)
#define __AMENDMENTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Amendment.h"
namespace LX
{

// Iterator : AmendmentCollection
class AmendmentCollectionIterator : public Iterator<Amendment*>
{
};

class AmendmentCollectionConstIterator : public ConstIterator<Amendment>
{
};

// Collection : AmendmentCollection
class AmendmentCollection : public ObjList<Amendment, AmendmentCollectionIterator, AmendmentCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
