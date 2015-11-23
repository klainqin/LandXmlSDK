#if !defined(__BEGINRUNOUTSTACOLLECTIONIMPL_H)
#define __BEGINRUNOUTSTACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "BeginRunoutSta.h"
#include "BeginRunoutStaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BeginRunoutStaImpl.h"
#endif

namespace LX
{
BeginRunoutStaCollection* createBeginRunoutStaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BeginRunoutStaCollectionImpl
class BeginRunoutStaCollectionImpl : public ObjListTmpl<BeginRunoutSta, BeginRunoutStaCollection, BeginRunoutStaCollectionIterator, BeginRunoutStaCollectionConstIterator>
{
public:
    BeginRunoutStaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
