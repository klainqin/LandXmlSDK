#if !defined(__BRIDGEELEMENTCOLLECTIONIMPL_H)
#define __BRIDGEELEMENTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "BridgeElement.h"
#include "BridgeElementCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BridgeElementImpl.h"
#endif

namespace LX
{
BridgeElementCollection* createBridgeElementCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BridgeElementCollectionImpl
class BridgeElementCollectionImpl : public ObjListTmpl<BridgeElement, BridgeElementCollection, BridgeElementCollectionIterator, BridgeElementCollectionConstIterator>
{
public:
    BridgeElementCollectionImpl::BridgeElementCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
