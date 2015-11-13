
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SurveyHeader.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurveyHeaderTmpl.inl"
namespace LX
{
template class SurveyHeaderTmpl<SurveyHeader>;
SurveyHeaderImpl::SurveyHeaderImpl (DocumentImpl* pDoc)
    : SurveyHeaderTmpl<SurveyHeader>(pDoc)
{
}
}; // namespace : LX
