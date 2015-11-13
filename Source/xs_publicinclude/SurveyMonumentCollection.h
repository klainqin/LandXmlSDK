#if !defined(__SURVEYMONUMENTCOLLECTION_H)
#define __SURVEYMONUMENTCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "SurveyMonument.h"
namespace LX
{

// Iterator : SurveyMonumentCollection
class SurveyMonumentCollectionIterator : public Iterator<SurveyMonument*>
{
};

class SurveyMonumentCollectionConstIterator : public ConstIterator<SurveyMonument>
{
};

// Collection : SurveyMonumentCollection
class SurveyMonumentCollection : public ObjList<SurveyMonument, SurveyMonumentCollectionIterator, SurveyMonumentCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
