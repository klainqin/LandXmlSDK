#if !defined(__SURVEYCOLLECTION_H)
#define __SURVEYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "Survey.h"
namespace LX
{

// Iterator : SurveyCollection
class SurveyCollectionIterator : public Iterator<Survey*>
{
};

class SurveyCollectionConstIterator : public ConstIterator<Survey>
{
};

// Collection : SurveyCollection
class SurveyCollection : public ObjList<Survey, SurveyCollectionIterator, SurveyCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
