#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurveyorCertificateCollectionImpl.h"
namespace LX
{

SurveyorCertificateCollection* createSurveyorCertificateCollectionObject (DocumentImpl* pDocument)
{
    SurveyorCertificateCollection* pCollection = new SurveyorCertificateCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurveyorCertificateCollectionImpl::SurveyorCertificateCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
