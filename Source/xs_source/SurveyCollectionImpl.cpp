#include "stdafx.h"
#include "LXTypes.h"
#include "LXTypesTmpl.inl"
#include "SurveyCollectionImpl.h"
namespace LX
{

SurveyCollection* createSurveyCollectionObject (DocumentImpl* pDocument)
{
    SurveyCollection* pCollection = new SurveyCollectionImpl(pDocument);
    if (!pCollection)
        throw Exception(Exception::kUnableToAllocateMemory, L"Unable to allocate member");
    return pCollection;
}

SurveyCollectionImpl::SurveyCollectionImpl (DocumentImpl* pDocument)
{
    m_pDoc = pDocument;
}
}; // namespace : LX
