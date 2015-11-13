#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "PurposeOfSurveyCollectionImpl.h"
namespace LX
{

PurposeOfSurveyCollection* createPurposeOfSurveyCollectionObject (DocumentImpl* pDocument)
{
    PurposeOfSurveyCollection* pCollection = new PurposeOfSurveyCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

PurposeOfSurveyCollectionImpl::PurposeOfSurveyCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
