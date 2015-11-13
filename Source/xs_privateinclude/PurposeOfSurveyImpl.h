#if !defined(__PURPOSEOFSURVEYIMPL_H)
#define __PURPOSEOFSURVEYIMPL_H

#include "PurposeOfSurveyTmpl.h"
namespace LX
{


class PurposeOfSurveyImpl : public PurposeOfSurveyTmpl<PurposeOfSurvey>
{
public:
    PurposeOfSurveyImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
