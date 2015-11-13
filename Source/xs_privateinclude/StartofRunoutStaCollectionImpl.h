#if !defined(__STARTOFRUNOUTSTACOLLECTIONIMPL_H)
#define __STARTOFRUNOUTSTACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "StartofRunoutSta.h"
#include "StartofRunoutStaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "StartofRunoutStaImpl.h"
#endif

namespace LX
{
StartofRunoutStaCollection* createStartofRunoutStaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : StartofRunoutStaCollectionImpl
class StartofRunoutStaCollectionImpl : public ObjListTmpl<StartofRunoutSta, StartofRunoutStaCollection, StartofRunoutStaCollectionIterator, StartofRunoutStaCollectionConstIterator>
{
public:
    StartofRunoutStaCollectionImpl::StartofRunoutStaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
