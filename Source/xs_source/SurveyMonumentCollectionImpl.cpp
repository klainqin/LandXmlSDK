#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurveyMonumentCollectionImpl.h"
namespace LX
{

SurveyMonumentCollection* createSurveyMonumentCollectionObject (DocumentImpl* pDocument)
{
    SurveyMonumentCollection* pCollection = new SurveyMonumentCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurveyMonumentCollectionImpl::SurveyMonumentCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
