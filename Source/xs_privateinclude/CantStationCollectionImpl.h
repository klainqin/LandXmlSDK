#if !defined(__CANTSTATIONCOLLECTIONIMPL_H)
#define __CANTSTATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "CantStation.h"
#include "CantStationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CantStationImpl.h"
#endif

namespace LX
{
CantStationCollection* createCantStationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CantStationCollectionImpl
class CantStationCollectionImpl : public ObjListTmpl<CantStation, CantStationCollection, CantStationCollectionIterator, CantStationCollectionConstIterator>
{
public:
    CantStationCollectionImpl::CantStationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
