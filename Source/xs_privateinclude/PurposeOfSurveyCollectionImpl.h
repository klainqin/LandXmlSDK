#if !defined(__PURPOSEOFSURVEYCOLLECTIONIMPL_H)
#define __PURPOSEOFSURVEYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PurposeOfSurvey.h"
#include "PurposeOfSurveyCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PurposeOfSurveyImpl.h"
#endif

namespace LX
{
PurposeOfSurveyCollection* createPurposeOfSurveyCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PurposeOfSurveyCollectionImpl
class PurposeOfSurveyCollectionImpl : public NamedObjMultiMapTmpl<PurposeOfSurvey, PurposeOfSurveyCollection, String, PurposeOfSurveyCollectionIterator, PurposeOfSurveyCollectionConstIterator>
{
public:
    PurposeOfSurveyCollectionImpl::PurposeOfSurveyCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
