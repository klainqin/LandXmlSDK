#if !defined(__SURVEYORCERTIFICATECOLLECTIONIMPL_H)
#define __SURVEYORCERTIFICATECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "SurveyorCertificate.h"
#include "SurveyorCertificateCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "SurveyorCertificateImpl.h"
#endif

namespace LX
{
SurveyorCertificateCollection* createSurveyorCertificateCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : SurveyorCertificateCollectionImpl
class SurveyorCertificateCollectionImpl : public NamedObjMultiMapTmpl<SurveyorCertificate, SurveyorCertificateCollection, String, SurveyorCertificateCollectionIterator, SurveyorCertificateCollectionConstIterator>
{
public:
    SurveyorCertificateCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
