#if !defined(__ANNOTATIONCOLLECTION_H)
#define __ANNOTATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Annotation.h"
namespace LX
{

// Iterator : AnnotationCollection
class AnnotationCollectionIterator : public Iterator<Annotation*>
{
};

class AnnotationCollectionConstIterator : public ConstIterator<Annotation>
{
};

// Collection : AnnotationCollection
class AnnotationCollection : public Map<Annotation, String, AnnotationCollectionIterator, AnnotationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
