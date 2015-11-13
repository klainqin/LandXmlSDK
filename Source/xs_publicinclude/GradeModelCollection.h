#if !defined(__GRADEMODELCOLLECTION_H)
#define __GRADEMODELCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "GradeModel.h"
namespace LX
{

// Iterator : GradeModelCollection
class GradeModelCollectionIterator : public Iterator<GradeModel*>
{
};

class GradeModelCollectionConstIterator : public ConstIterator<GradeModel>
{
};

// Collection : GradeModelCollection
class GradeModelCollection : public Map<GradeModel, String, GradeModelCollectionIterator, GradeModelCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
