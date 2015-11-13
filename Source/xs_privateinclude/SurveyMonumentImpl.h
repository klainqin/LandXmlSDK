#if !defined(__SURVEYMONUMENTIMPL_H)
#define __SURVEYMONUMENTIMPL_H

#include "SurveyMonumentTmpl.h"
namespace LX
{


class SurveyMonumentImpl : public SurveyMonumentTmpl<SurveyMonument>
{
public:
    SurveyMonumentImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
