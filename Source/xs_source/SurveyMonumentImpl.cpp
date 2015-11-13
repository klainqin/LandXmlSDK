
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SurveyMonument.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurveyMonumentTmpl.inl"
namespace LX
{
template class SurveyMonumentTmpl<SurveyMonument>;
SurveyMonumentImpl::SurveyMonumentImpl (DocumentImpl* pDoc)
    : SurveyMonumentTmpl<SurveyMonument>(pDoc)
{
}
}; // namespace : LX
