
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "PurposeOfSurvey.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "PurposeOfSurveyTmpl.inl"
namespace LX
{
template class PurposeOfSurveyTmpl<PurposeOfSurvey>;
PurposeOfSurveyImpl::PurposeOfSurveyImpl (DocumentImpl* pDoc)
    : PurposeOfSurveyTmpl<PurposeOfSurvey>(pDoc)
{
}
}; // namespace : LX
