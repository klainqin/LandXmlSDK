#if !defined(__BEGINRUNOFFSTACOLLECTIONIMPL_H)
#define __BEGINRUNOFFSTACOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "BeginRunoffSta.h"
#include "BeginRunoffStaCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BeginRunoffStaImpl.h"
#endif

namespace LX
{
BeginRunoffStaCollection* createBeginRunoffStaCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BeginRunoffStaCollectionImpl
class BeginRunoffStaCollectionImpl : public ObjListTmpl<BeginRunoffSta, BeginRunoffStaCollection, BeginRunoffStaCollectionIterator, BeginRunoffStaCollectionConstIterator>
{
public:
    BeginRunoffStaCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
