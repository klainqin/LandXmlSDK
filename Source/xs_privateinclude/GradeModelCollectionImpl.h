#if !defined(__GRADEMODELCOLLECTIONIMPL_H)
#define __GRADEMODELCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "GradeModel.h"
#include "GradeModelCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "GradeModelImpl.h"
#endif

namespace LX
{
GradeModelCollection* createGradeModelCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : GradeModelCollectionImpl
class GradeModelCollectionImpl : public GlobalObjMapTmpl<GradeModel, GradeModelCollection, String, GradeModelCollectionIterator, GradeModelCollectionConstIterator>
{
public:
    GradeModelCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
