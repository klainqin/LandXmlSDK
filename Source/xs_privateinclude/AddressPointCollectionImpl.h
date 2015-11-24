#if !defined(__ADDRESSPOINTCOLLECTIONIMPL_H)
#define __ADDRESSPOINTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "AddressPoint.h"
#include "AddressPointCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AddressPointImpl.h"
#endif

namespace LX
{
AddressPointCollection* createAddressPointCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AddressPointCollectionImpl
class AddressPointCollectionImpl : public NamedObjMultiMapTmpl<AddressPoint, AddressPointCollection, String, AddressPointCollectionIterator, AddressPointCollectionConstIterator>
{
public:
    AddressPointCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
