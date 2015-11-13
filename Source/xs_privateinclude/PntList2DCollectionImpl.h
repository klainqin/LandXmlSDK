#if !defined(__PNTLIST2DCOLLECTIONIMPL_H)
#define __PNTLIST2DCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PntList2D.h"
#include "PntList2DCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PntList2DImpl.h"
#endif

namespace LX
{
PntList2DCollection* createPntList2DCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PntList2DCollectionImpl
class PntList2DCollectionImpl : public ObjListTmpl<PntList2D, PntList2DCollection, PntList2DCollectionIterator, PntList2DCollectionConstIterator>
{
public:
    PntList2DCollectionImpl::PntList2DCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
