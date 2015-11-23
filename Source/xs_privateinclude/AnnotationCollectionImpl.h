#if !defined(__ANNOTATIONCOLLECTIONIMPL_H)
#define __ANNOTATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Annotation.h"
#include "AnnotationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AnnotationImpl.h"
#endif

namespace LX
{
AnnotationCollection* createAnnotationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AnnotationCollectionImpl
class AnnotationCollectionImpl : public NamedObjMultiMapTmpl<Annotation, AnnotationCollection, String, AnnotationCollectionIterator, AnnotationCollectionConstIterator>
{
public:
    AnnotationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
