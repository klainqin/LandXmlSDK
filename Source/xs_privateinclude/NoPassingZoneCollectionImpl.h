#if !defined(__NOPASSINGZONECOLLECTIONIMPL_H)
#define __NOPASSINGZONECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "NoPassingZone.h"
#include "NoPassingZoneCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "NoPassingZoneImpl.h"
#endif

namespace LX
{
NoPassingZoneCollection* createNoPassingZoneCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : NoPassingZoneCollectionImpl
class NoPassingZoneCollectionImpl : public ObjListTmpl<NoPassingZone, NoPassingZoneCollection, NoPassingZoneCollectionIterator, NoPassingZoneCollectionConstIterator>
{
public:
    NoPassingZoneCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
