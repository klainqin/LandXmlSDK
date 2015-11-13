#include "stdafx.h"
#include "LXTypes.h"
#include "PointResults.h"
#include "TargetPoint.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "PointResultsImpl.h"
#include "TargetPointImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
PointResultsTmpl<T>::PointResultsTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_TargetPoint = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_SetupID = L"";
    m_bSetupID_valueSet = false;
    m_TargetSetupID = L"";
    m_bTargetSetupID_valueSet = false;
    m_MeanHorizAngle = 0.0;
    m_bMeanHorizAngle_valueSet = false;
    m_HorizStdDeviation = 0.0;
    m_bHorizStdDeviation_valueSet = false;
    m_MeanzenithAngle = 0.0;
    m_bMeanzenithAngle_valueSet = false;
    m_VertStdDeviation = 0.0;
    m_bVertStdDeviation_valueSet = false;
    m_MeanSlopeDistance = 0.0;
    m_bMeanSlopeDistance_valueSet = false;
    m_SlopeDistanceStdDeviation = 0.0;
    m_bSlopeDistanceStdDeviation_valueSet = false;
}


template<class T>
PointResultsTmpl<T>::~PointResultsTmpl<T> ()
{
    if (m_TargetPoint != NULL)
    {
        m_TargetPoint->release();
        m_TargetPoint = NULL;
    }
    if (m_FieldNote != NULL)
    {
        m_FieldNote->release();
        m_FieldNote = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}

template <class T>
FieldNoteCollection& PointResultsTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& PointResultsTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& PointResultsTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& PointResultsTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
TargetPoint* PointResultsTmpl<T>::getTargetPoint() const
{
    return m_TargetPoint;
}

template <class T>
void PointResultsTmpl<T>::setTargetPoint(TargetPoint* pValue)
{
    m_TargetPoint = pValue;
}


template <class T>
String PointResultsTmpl<T>::getSetupID() const
{
    return m_SetupID;
}

template <class T>
void PointResultsTmpl<T>::setSetupID(String value)
{
    m_SetupID = value;
    m_bSetupID_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_SetupID() const
{
    return m_bSetupID_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_SetupID()
{
    m_bSetupID_valueSet = false;
}


template <class T>
String PointResultsTmpl<T>::getTargetSetupID() const
{
    return m_TargetSetupID;
}

template <class T>
void PointResultsTmpl<T>::setTargetSetupID(String value)
{
    m_TargetSetupID = value;
    m_bTargetSetupID_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_TargetSetupID() const
{
    return m_bTargetSetupID_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_TargetSetupID()
{
    m_bTargetSetupID_valueSet = false;
}


template <class T>
double PointResultsTmpl<T>::getMeanHorizAngle() const
{
    return m_MeanHorizAngle;
}

template <class T>
void PointResultsTmpl<T>::setMeanHorizAngle(double value)
{
    m_MeanHorizAngle = value;
    m_bMeanHorizAngle_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_MeanHorizAngle() const
{
    return m_bMeanHorizAngle_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_MeanHorizAngle()
{
    m_bMeanHorizAngle_valueSet = false;
}


template <class T>
double PointResultsTmpl<T>::getHorizStdDeviation() const
{
    return m_HorizStdDeviation;
}

template <class T>
void PointResultsTmpl<T>::setHorizStdDeviation(double value)
{
    m_HorizStdDeviation = value;
    m_bHorizStdDeviation_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_HorizStdDeviation() const
{
    return m_bHorizStdDeviation_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_HorizStdDeviation()
{
    m_bHorizStdDeviation_valueSet = false;
}


template <class T>
double PointResultsTmpl<T>::getMeanzenithAngle() const
{
    return m_MeanzenithAngle;
}

template <class T>
void PointResultsTmpl<T>::setMeanzenithAngle(double value)
{
    m_MeanzenithAngle = value;
    m_bMeanzenithAngle_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_MeanzenithAngle() const
{
    return m_bMeanzenithAngle_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_MeanzenithAngle()
{
    m_bMeanzenithAngle_valueSet = false;
}


template <class T>
double PointResultsTmpl<T>::getVertStdDeviation() const
{
    return m_VertStdDeviation;
}

template <class T>
void PointResultsTmpl<T>::setVertStdDeviation(double value)
{
    m_VertStdDeviation = value;
    m_bVertStdDeviation_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_VertStdDeviation() const
{
    return m_bVertStdDeviation_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_VertStdDeviation()
{
    m_bVertStdDeviation_valueSet = false;
}


template <class T>
double PointResultsTmpl<T>::getMeanSlopeDistance() const
{
    return m_MeanSlopeDistance;
}

template <class T>
void PointResultsTmpl<T>::setMeanSlopeDistance(double value)
{
    m_MeanSlopeDistance = value;
    m_bMeanSlopeDistance_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_MeanSlopeDistance() const
{
    return m_bMeanSlopeDistance_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_MeanSlopeDistance()
{
    m_bMeanSlopeDistance_valueSet = false;
}


template <class T>
double PointResultsTmpl<T>::getSlopeDistanceStdDeviation() const
{
    return m_SlopeDistanceStdDeviation;
}

template <class T>
void PointResultsTmpl<T>::setSlopeDistanceStdDeviation(double value)
{
    m_SlopeDistanceStdDeviation = value;
    m_bSlopeDistanceStdDeviation_valueSet = true;
}

template <class T>
bool PointResultsTmpl<T>::hasValue_SlopeDistanceStdDeviation() const
{
    return m_bSlopeDistanceStdDeviation_valueSet;
}

template <class T>
void PointResultsTmpl<T>::resetValue_SlopeDistanceStdDeviation()
{
    m_bSlopeDistanceStdDeviation_valueSet = false;
}



template <class T>
void PointResultsTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"PointResults";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bSetupID_valueSet)
    {
        stream.write(L" setupID=\"");
        StringObjectImpl::streamOut(m_SetupID, stream);
        stream.write(L"\"");
    }
    if (m_bTargetSetupID_valueSet)
    {
        stream.write(L" targetSetupID=\"");
        StringObjectImpl::streamOut(m_TargetSetupID, stream);
        stream.write(L"\"");
    }
    if (m_bMeanHorizAngle_valueSet)
    {
        stream.write(L" meanHorizAngle=\"");
        DoubleObjectImpl::streamOut(m_MeanHorizAngle, stream);
        stream.write(L"\"");
    }
    if (m_bHorizStdDeviation_valueSet)
    {
        stream.write(L" horizStdDeviation=\"");
        DoubleObjectImpl::streamOut(m_HorizStdDeviation, stream);
        stream.write(L"\"");
    }
    if (m_bMeanzenithAngle_valueSet)
    {
        stream.write(L" meanzenithAngle=\"");
        DoubleObjectImpl::streamOut(m_MeanzenithAngle, stream);
        stream.write(L"\"");
    }
    if (m_bVertStdDeviation_valueSet)
    {
        stream.write(L" vertStdDeviation=\"");
        DoubleObjectImpl::streamOut(m_VertStdDeviation, stream);
        stream.write(L"\"");
    }
    if (m_bMeanSlopeDistance_valueSet)
    {
        stream.write(L" meanSlopeDistance=\"");
        DoubleObjectImpl::streamOut(m_MeanSlopeDistance, stream);
        stream.write(L"\"");
    }
    if (m_bSlopeDistanceStdDeviation_valueSet)
    {
        stream.write(L" slopeDistanceStdDeviation=\"");
        DoubleObjectImpl::streamOut(m_SlopeDistanceStdDeviation, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_TargetPoint)
    {
    	m_TargetPoint->toXml(stream);
    }
    if (m_FieldNote)
    {
    	m_FieldNote->toXml(stream);
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
Object::ValidityEnum PointResultsTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_TargetPoint)
    {
        if (m_TargetPoint->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FieldNote)
    {
        if (m_FieldNote->validate(pEventSink) != Object::kValid)
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
