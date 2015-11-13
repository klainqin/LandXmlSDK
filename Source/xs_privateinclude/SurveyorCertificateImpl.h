#if !defined(__SURVEYORCERTIFICATEIMPL_H)
#define __SURVEYORCERTIFICATEIMPL_H

#include "SurveyorCertificateTmpl.h"
namespace LX
{


class SurveyorCertificateImpl : public SurveyorCertificateTmpl<SurveyorCertificate>
{
public:
    SurveyorCertificateImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
