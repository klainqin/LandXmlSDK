#if !defined(__SURVEYHEADERIMPL_H)
#define __SURVEYHEADERIMPL_H

#include "SurveyHeaderTmpl.h"
namespace LX
{


class SurveyHeaderImpl : public SurveyHeaderTmpl<SurveyHeader>
{
public:
    SurveyHeaderImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
