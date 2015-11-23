#if !defined(__CURBCOLLECTIONIMPL_H)
#define __CURBCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Curb.h"
#include "CurbCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "CurbImpl.h"
#endif

namespace LX
{
CurbCollection* createCurbCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : CurbCollectionImpl
class CurbCollectionImpl : public ObjListTmpl<Curb, CurbCollection, CurbCollectionIterator, CurbCollectionConstIterator>
{
public:
    CurbCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
