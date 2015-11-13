#if !defined(__ENDOFRUNOUTSTACOLLECTIONIMPL_H)
#define __ENDOFRUNOUTSTACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "EndofRunoutSta.h"
#include "EndofRunoutStaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "EndofRunoutStaImpl.h"
#endif

namespace LX
{
EndofRunoutStaCollection* createEndofRunoutStaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : EndofRunoutStaCollectionImpl
class EndofRunoutStaCollectionImpl : public ObjListTmpl<EndofRunoutSta, EndofRunoutStaCollection, EndofRunoutStaCollectionIterator, EndofRunoutStaCollectionConstIterator>
{
public:
    EndofRunoutStaCollectionImpl::EndofRunoutStaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
