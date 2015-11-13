
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "SurveyorCertificate.h"
#include "LXTypesTmpl.h"

#include "LXTypesImpl.h"
#include "SurveyorCertificateTmpl.inl"
namespace LX
{
template class SurveyorCertificateTmpl<SurveyorCertificate>;
SurveyorCertificateImpl::SurveyorCertificateImpl (DocumentImpl* pDoc)
    : SurveyorCertificateTmpl<SurveyorCertificate>(pDoc)
{
}
}; // namespace : LX
