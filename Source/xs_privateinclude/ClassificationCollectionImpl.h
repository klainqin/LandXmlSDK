#if !defined(__CLASSIFICATIONCOLLECTIONIMPL_H)
#define __CLASSIFICATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Classification.h"
#include "ClassificationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ClassificationImpl.h"
#endif

namespace LX
{
ClassificationCollection* createClassificationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ClassificationCollectionImpl
class ClassificationCollectionImpl : public ObjListTmpl<Classification, ClassificationCollection, ClassificationCollectionIterator, ClassificationCollectionConstIterator>
{
public:
    ClassificationCollectionImpl::ClassificationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
