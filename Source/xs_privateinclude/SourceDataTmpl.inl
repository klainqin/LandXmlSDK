#include "stdafx.h"
#include "LXTypes.h"
#include "SourceData.h"
#include "ChainCollection.h"
#include "PointFiles.h"
#include "Boundaries.h"
#include "Breaklines.h"
#include "Contours.h"
#include "DataPointsCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SourceDataImpl.h"
#include "ChainCollectionImpl.h"
#include "PointFilesImpl.h"
#include "BoundariesImpl.h"
#include "BreaklinesImpl.h"
#include "ContoursImpl.h"
#include "DataPointsCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SourceDataTmpl<T>::SourceDataTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Chain = createChainCollectionObject(pDoc);
    m_PointFiles = NULL;
    m_Boundaries = NULL;
    m_Breaklines = NULL;
    m_Contours = NULL;
    m_DataPoints = createDataPointsCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
}


template<class T>
SourceDataTmpl<T>::~SourceDataTmpl<T> ()
{
    if (m_Chain != NULL)
    {
        m_Chain->release();
        m_Chain = NULL;
    }
    if (m_PointFiles != NULL)
    {
        m_PointFiles->release();
        m_PointFiles = NULL;
    }
    if (m_Boundaries != NULL)
    {
        m_Boundaries->release();
        m_Boundaries = NULL;
    }
    if (m_Breaklines != NULL)
    {
        m_Breaklines->release();
        m_Breaklines = NULL;
    }
    if (m_Contours != NULL)
    {
        m_Contours->release();
        m_Contours = NULL;
    }
    if (m_DataPoints != NULL)
    {
        m_DataPoints->release();
        m_DataPoints = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
ChainCollection& SourceDataTmpl<T>::Chain()
{
    return *m_Chain;
}

template <class T>
const ChainCollection& SourceDataTmpl<T>::Chain() const
{
    return *m_Chain;
}

template <class T>
DataPointsCollection& SourceDataTmpl<T>::DataPoints()
{
    return *m_DataPoints;
}

template <class T>
const DataPointsCollection& SourceDataTmpl<T>::DataPoints() const
{
    return *m_DataPoints;
}

template <class T>
FeatureCollection& SourceDataTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SourceDataTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
PointFiles* SourceDataTmpl<T>::getPointFiles() const
{
    return m_PointFiles;
}

template <class T>
void SourceDataTmpl<T>::setPointFiles(PointFiles* pValue)
{
    m_PointFiles = pValue;
}

template <class T>
Boundaries* SourceDataTmpl<T>::getBoundaries() const
{
    return m_Boundaries;
}

template <class T>
void SourceDataTmpl<T>::setBoundaries(Boundaries* pValue)
{
    m_Boundaries = pValue;
}

template <class T>
Breaklines* SourceDataTmpl<T>::getBreaklines() const
{
    return m_Breaklines;
}

template <class T>
void SourceDataTmpl<T>::setBreaklines(Breaklines* pValue)
{
    m_Breaklines = pValue;
}

template <class T>
Contours* SourceDataTmpl<T>::getContours() const
{
    return m_Contours;
}

template <class T>
void SourceDataTmpl<T>::setContours(Contours* pValue)
{
    m_Contours = pValue;
}



template <class T>
void SourceDataTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"SourceData";
    stream.write(L"<");
    stream.write(kstrElementName);
    stream.write(L">");
    if (m_Chain)
    {
    	m_Chain->toXml(stream);
    }
    if (m_PointFiles)
    {
    	m_PointFiles->toXml(stream);
    }
    if (m_Boundaries)
    {
    	m_Boundaries->toXml(stream);
    }
    if (m_Breaklines)
    {
    	m_Breaklines->toXml(stream);
    }
    if (m_Contours)
    {
    	m_Contours->toXml(stream);
    }
    if (m_DataPoints)
    {
    	m_DataPoints->toXml(stream);
    }
    if (m_Feature)
    {
    	m_Feature->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum SourceDataTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Chain)
    {
        if (m_Chain->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PointFiles)
    {
        if (m_PointFiles->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Boundaries)
    {
        if (m_Boundaries->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Breaklines)
    {
        if (m_Breaklines->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Contours)
    {
        if (m_Contours->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_DataPoints)
    {
        if (m_DataPoints->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    return returnCode;
}

}; // namespace : LX
