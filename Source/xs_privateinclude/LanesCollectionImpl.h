#if !defined(__LANESCOLLECTIONIMPL_H)
#define __LANESCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Lanes.h"
#include "LanesCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "LanesImpl.h"
#endif

namespace LX
{
LanesCollection* createLanesCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : LanesCollectionImpl
class LanesCollectionImpl : public ObjListTmpl<Lanes, LanesCollection, LanesCollectionIterator, LanesCollectionConstIterator>
{
public:
    LanesCollectionImpl::LanesCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
