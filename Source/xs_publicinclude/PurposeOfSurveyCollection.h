#if !defined(__PURPOSEOFSURVEYCOLLECTION_H)
#define __PURPOSEOFSURVEYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "PurposeOfSurvey.h"
namespace LX
{

// Iterator : PurposeOfSurveyCollection
class PurposeOfSurveyCollectionIterator : public Iterator<PurposeOfSurvey*>
{
};

class PurposeOfSurveyCollectionConstIterator : public ConstIterator<PurposeOfSurvey>
{
};

// Collection : PurposeOfSurveyCollection
class PurposeOfSurveyCollection : public Map<PurposeOfSurvey, String, PurposeOfSurveyCollectionIterator, PurposeOfSurveyCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
