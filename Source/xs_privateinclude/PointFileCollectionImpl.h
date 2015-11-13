#if !defined(__POINTFILECOLLECTIONIMPL_H)
#define __POINTFILECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PointFile.h"
#include "PointFileCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PointFileImpl.h"
#endif

namespace LX
{
PointFileCollection* createPointFileCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PointFileCollectionImpl
class PointFileCollectionImpl : public ObjListTmpl<PointFile, PointFileCollection, PointFileCollectionIterator, PointFileCollectionConstIterator>
{
public:
    PointFileCollectionImpl::PointFileCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
