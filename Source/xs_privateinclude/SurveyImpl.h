#if !defined(__SURVEYIMPL_H)
#define __SURVEYIMPL_H

#include "SurveyTmpl.h"
namespace LX
{


class SurveyImpl : public SurveyTmpl<Survey>
{
public:
    SurveyImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
