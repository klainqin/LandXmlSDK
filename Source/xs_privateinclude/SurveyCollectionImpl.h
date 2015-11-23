#if !defined(__SURVEYCOLLECTIONIMPL_H)
#define __SURVEYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Survey.h"
#include "SurveyCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurveyImpl.h"
#endif

namespace LX
{
SurveyCollection* createSurveyCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurveyCollectionImpl
class SurveyCollectionImpl : public ObjListTmpl<Survey, SurveyCollection, SurveyCollectionIterator, SurveyCollectionConstIterator>
{
public:
    SurveyCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
