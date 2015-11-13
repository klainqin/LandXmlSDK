#if !defined(__AMENDMENTITEMCOLLECTION_H)
#define __AMENDMENTITEMCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "AmendmentItem.h"
namespace LX
{

// Iterator : AmendmentItemCollection
class AmendmentItemCollectionIterator : public Iterator<AmendmentItem*>
{
};

class AmendmentItemCollectionConstIterator : public ConstIterator<AmendmentItem>
{
};

// Collection : AmendmentItemCollection
class AmendmentItemCollection : public ObjList<AmendmentItem, AmendmentItemCollectionIterator, AmendmentItemCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
