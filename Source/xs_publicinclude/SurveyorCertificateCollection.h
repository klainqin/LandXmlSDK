#if !defined(__SURVEYORCERTIFICATECOLLECTION_H)
#define __SURVEYORCERTIFICATECOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "SurveyorCertificate.h"
namespace LX
{

// Iterator : SurveyorCertificateCollection
class SurveyorCertificateCollectionIterator : public Iterator<SurveyorCertificate*>
{
};

class SurveyorCertificateCollectionConstIterator : public ConstIterator<SurveyorCertificate>
{
};

// Collection : SurveyorCertificateCollection
class SurveyorCertificateCollection : public Map<SurveyorCertificate, String, SurveyorCertificateCollectionIterator, SurveyorCertificateCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
