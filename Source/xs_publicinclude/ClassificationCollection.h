#if !defined(__CLASSIFICATIONCOLLECTION_H)
#define __CLASSIFICATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Classification.h"
namespace LX
{

// Iterator : ClassificationCollection
class ClassificationCollectionIterator : public Iterator<Classification*>
{
};

class ClassificationCollectionConstIterator : public ConstIterator<Classification>
{
};

// Collection : ClassificationCollection
class ClassificationCollection : public ObjList<Classification, ClassificationCollectionIterator, ClassificationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
