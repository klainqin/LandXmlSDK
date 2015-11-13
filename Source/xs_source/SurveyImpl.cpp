
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "Survey.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurveyTmpl.inl"
namespace LX
{
template class SurveyTmpl<Survey>;
SurveyImpl::SurveyImpl (DocumentImpl* pDoc)
    : SurveyTmpl<Survey>(pDoc)
{
}
}; // namespace : LX
