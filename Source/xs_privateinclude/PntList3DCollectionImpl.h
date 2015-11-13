#if !defined(__PNTLIST3DCOLLECTIONIMPL_H)
#define __PNTLIST3DCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PntList3D.h"
#include "PntList3DCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PntList3DImpl.h"
#endif

namespace LX
{
PntList3DCollection* createPntList3DCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PntList3DCollectionImpl
class PntList3DCollectionImpl : public ObjListTmpl<PntList3D, PntList3DCollection, PntList3DCollectionIterator, PntList3DCollectionConstIterator>
{
public:
    PntList3DCollectionImpl::PntList3DCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
