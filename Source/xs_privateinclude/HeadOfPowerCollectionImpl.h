#if !defined(__HEADOFPOWERCOLLECTIONIMPL_H)
#define __HEADOFPOWERCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "HeadOfPower.h"
#include "HeadOfPowerCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "HeadOfPowerImpl.h"
#endif

namespace LX
{
HeadOfPowerCollection* createHeadOfPowerCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : HeadOfPowerCollectionImpl
class HeadOfPowerCollectionImpl : public NamedObjMultiMapTmpl<HeadOfPower, HeadOfPowerCollection, String, HeadOfPowerCollectionIterator, HeadOfPowerCollectionConstIterator>
{
public:
    HeadOfPowerCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
