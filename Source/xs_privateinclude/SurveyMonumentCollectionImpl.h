#if !defined(__SURVEYMONUMENTCOLLECTIONIMPL_H)
#define __SURVEYMONUMENTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "SurveyMonument.h"
#include "SurveyMonumentCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurveyMonumentImpl.h"
#endif

namespace LX
{
SurveyMonumentCollection* createSurveyMonumentCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurveyMonumentCollectionImpl
class SurveyMonumentCollectionImpl : public ObjListTmpl<SurveyMonument, SurveyMonumentCollection, SurveyMonumentCollectionIterator, SurveyMonumentCollectionConstIterator>
{
public:
    SurveyMonumentCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
