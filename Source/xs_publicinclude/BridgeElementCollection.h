#if !defined(__BRIDGEELEMENTCOLLECTION_H)
#define __BRIDGEELEMENTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "BridgeElement.h"
namespace LX
{

// Iterator : BridgeElementCollection
class BridgeElementCollectionIterator : public Iterator<BridgeElement*>
{
};

class BridgeElementCollectionConstIterator : public ConstIterator<BridgeElement>
{
};

// Collection : BridgeElementCollection
class BridgeElementCollection : public ObjList<BridgeElement, BridgeElementCollectionIterator, BridgeElementCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
