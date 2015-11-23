#include "stdafx.h"
#include "LXTypes.h"
#include "CoordinateSystem.h"
#include "Start.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CoordinateSystemImpl.h"
#include "StartImpl.h"
#include "FieldNoteCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CoordinateSystemTmpl<T>::CoordinateSystemTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Start = NULL;
    m_FieldNote = createFieldNoteCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_EpsgCode = L"";
    m_bEpsgCode_valueSet = false;
    m_OgcWktCode = L"";
    m_bOgcWktCode_valueSet = false;
    m_HorizontalDatum = L"";
    m_bHorizontalDatum_valueSet = false;
    m_VerticalDatum = L"";
    m_bVerticalDatum_valueSet = false;
    m_EllipsoidName = L"";
    m_bEllipsoidName_valueSet = false;
    m_HorizontalCoordinateSystemName = L"";
    m_bHorizontalCoordinateSystemName_valueSet = false;
    m_GeocentricCoordinateSystemName = L"";
    m_bGeocentricCoordinateSystemName_valueSet = false;
    m_FileLocation = L"";
    m_bFileLocation_valueSet = false;
    m_RotationAngle = 0.0;
    m_bRotationAngle_valueSet = false;
    m_Datum = L"";
    m_bDatum_valueSet = false;
    m_FittedCoordinateSystemName = L"";
    m_bFittedCoordinateSystemName_valueSet = false;
    m_CompoundCoordinateSystemName = L"";
    m_bCompoundCoordinateSystemName_valueSet = false;
    m_LocalCoordinateSystemName = L"";
    m_bLocalCoordinateSystemName_valueSet = false;
    m_GeographicCoordinateSystemName = L"";
    m_bGeographicCoordinateSystemName_valueSet = false;
    m_ProjectedCoordinateSystemName = L"";
    m_bProjectedCoordinateSystemName_valueSet = false;
    m_VerticalCoordinateSystemName = L"";
    m_bVerticalCoordinateSystemName_valueSet = false;
}


template<class T>
CoordinateSystemTmpl<T>::~CoordinateSystemTmpl ()
{
    if (m_Start != NULL)
    {
        m_Start->release();
        m_Start = NULL;
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
bool CoordinateSystemTmpl<T>::getObjectId(const String*& pId) const
{
    if (m_bName_valueSet)
    {
        pId = &m_Name;
        return true;
    }
    else
    {
        pId = NULL;
        return false;
    }
}

template <class T>
ValueObject* CoordinateSystemTmpl<T>::id() const
{
    if (m_bName_valueSet)
    {
        ValueObject* pValue = new StringObjectTmpl<StringObject>(m_Name);
        if (!pValue)
	         throw Exception(Exception::kUnableToAllocateMemory, L"Out of Memory.");
        return pValue;
    }
    else
        return NULL;
}

template <class T>
FieldNoteCollection& CoordinateSystemTmpl<T>::FieldNote()
{
    return *m_FieldNote;
}

template <class T>
const FieldNoteCollection& CoordinateSystemTmpl<T>::FieldNote() const
{
    return *m_FieldNote;
}

template <class T>
FeatureCollection& CoordinateSystemTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CoordinateSystemTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Start* CoordinateSystemTmpl<T>::getStart() const
{
    return m_Start;
}

template <class T>
void CoordinateSystemTmpl<T>::setStart(Start* pValue)
{
    m_Start = pValue;
}


template <class T>
String CoordinateSystemTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CoordinateSystemTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CoordinateSystemTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (this->m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(this->m_pCollectionLocation);
        if (pNamedCollLoc)
        {
            try
            {
                // First check the name.
                if (!pNamedCollLoc->objectCheckNewName())
	                 throw Exception(Exception::kObjectIdCollectionConflict, L"Unable to change identifying member, because collection name conflict.");
                // We are in a named collection. Now tell the collection the object has been renamed.
                if (!pNamedCollLoc->objectRenamed())
                    // Object could not be renamed within the collection.
	                 throw Exception(Exception::kObjectRenamedFailed, L"Could not rename object within collection.");
            }
            catch (Exception e)
            {
                m_Name = oldValue;
                throw;
            }
        }
    }
    m_bName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getEpsgCode() const
{
    return m_EpsgCode;
}

template <class T>
void CoordinateSystemTmpl<T>::setEpsgCode(String value)
{
    m_EpsgCode = value;
    m_bEpsgCode_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_EpsgCode() const
{
    return m_bEpsgCode_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_EpsgCode()
{
    m_bEpsgCode_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getOgcWktCode() const
{
    return m_OgcWktCode;
}

template <class T>
void CoordinateSystemTmpl<T>::setOgcWktCode(String value)
{
    m_OgcWktCode = value;
    m_bOgcWktCode_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_OgcWktCode() const
{
    return m_bOgcWktCode_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_OgcWktCode()
{
    m_bOgcWktCode_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getHorizontalDatum() const
{
    return m_HorizontalDatum;
}

template <class T>
void CoordinateSystemTmpl<T>::setHorizontalDatum(String value)
{
    m_HorizontalDatum = value;
    m_bHorizontalDatum_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_HorizontalDatum() const
{
    return m_bHorizontalDatum_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_HorizontalDatum()
{
    m_bHorizontalDatum_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getVerticalDatum() const
{
    return m_VerticalDatum;
}

template <class T>
void CoordinateSystemTmpl<T>::setVerticalDatum(String value)
{
    m_VerticalDatum = value;
    m_bVerticalDatum_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_VerticalDatum() const
{
    return m_bVerticalDatum_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_VerticalDatum()
{
    m_bVerticalDatum_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getEllipsoidName() const
{
    return m_EllipsoidName;
}

template <class T>
void CoordinateSystemTmpl<T>::setEllipsoidName(String value)
{
    m_EllipsoidName = value;
    m_bEllipsoidName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_EllipsoidName() const
{
    return m_bEllipsoidName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_EllipsoidName()
{
    m_bEllipsoidName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getHorizontalCoordinateSystemName() const
{
    return m_HorizontalCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setHorizontalCoordinateSystemName(String value)
{
    m_HorizontalCoordinateSystemName = value;
    m_bHorizontalCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_HorizontalCoordinateSystemName() const
{
    return m_bHorizontalCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_HorizontalCoordinateSystemName()
{
    m_bHorizontalCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getGeocentricCoordinateSystemName() const
{
    return m_GeocentricCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setGeocentricCoordinateSystemName(String value)
{
    m_GeocentricCoordinateSystemName = value;
    m_bGeocentricCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_GeocentricCoordinateSystemName() const
{
    return m_bGeocentricCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_GeocentricCoordinateSystemName()
{
    m_bGeocentricCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getFileLocation() const
{
    return m_FileLocation;
}

template <class T>
void CoordinateSystemTmpl<T>::setFileLocation(String value)
{
    m_FileLocation = value;
    m_bFileLocation_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_FileLocation() const
{
    return m_bFileLocation_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_FileLocation()
{
    m_bFileLocation_valueSet = false;
}


template <class T>
double CoordinateSystemTmpl<T>::getRotationAngle() const
{
    return m_RotationAngle;
}

template <class T>
void CoordinateSystemTmpl<T>::setRotationAngle(double value)
{
    m_RotationAngle = value;
    m_bRotationAngle_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_RotationAngle() const
{
    return m_bRotationAngle_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_RotationAngle()
{
    m_bRotationAngle_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getDatum() const
{
    return m_Datum;
}

template <class T>
void CoordinateSystemTmpl<T>::setDatum(String value)
{
    m_Datum = value;
    m_bDatum_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_Datum() const
{
    return m_bDatum_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_Datum()
{
    m_bDatum_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getFittedCoordinateSystemName() const
{
    return m_FittedCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setFittedCoordinateSystemName(String value)
{
    m_FittedCoordinateSystemName = value;
    m_bFittedCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_FittedCoordinateSystemName() const
{
    return m_bFittedCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_FittedCoordinateSystemName()
{
    m_bFittedCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getCompoundCoordinateSystemName() const
{
    return m_CompoundCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setCompoundCoordinateSystemName(String value)
{
    m_CompoundCoordinateSystemName = value;
    m_bCompoundCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_CompoundCoordinateSystemName() const
{
    return m_bCompoundCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_CompoundCoordinateSystemName()
{
    m_bCompoundCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getLocalCoordinateSystemName() const
{
    return m_LocalCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setLocalCoordinateSystemName(String value)
{
    m_LocalCoordinateSystemName = value;
    m_bLocalCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_LocalCoordinateSystemName() const
{
    return m_bLocalCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_LocalCoordinateSystemName()
{
    m_bLocalCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getGeographicCoordinateSystemName() const
{
    return m_GeographicCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setGeographicCoordinateSystemName(String value)
{
    m_GeographicCoordinateSystemName = value;
    m_bGeographicCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_GeographicCoordinateSystemName() const
{
    return m_bGeographicCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_GeographicCoordinateSystemName()
{
    m_bGeographicCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getProjectedCoordinateSystemName() const
{
    return m_ProjectedCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setProjectedCoordinateSystemName(String value)
{
    m_ProjectedCoordinateSystemName = value;
    m_bProjectedCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_ProjectedCoordinateSystemName() const
{
    return m_bProjectedCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_ProjectedCoordinateSystemName()
{
    m_bProjectedCoordinateSystemName_valueSet = false;
}


template <class T>
String CoordinateSystemTmpl<T>::getVerticalCoordinateSystemName() const
{
    return m_VerticalCoordinateSystemName;
}

template <class T>
void CoordinateSystemTmpl<T>::setVerticalCoordinateSystemName(String value)
{
    m_VerticalCoordinateSystemName = value;
    m_bVerticalCoordinateSystemName_valueSet = true;
}

template <class T>
bool CoordinateSystemTmpl<T>::hasValue_VerticalCoordinateSystemName() const
{
    return m_bVerticalCoordinateSystemName_valueSet;
}

template <class T>
void CoordinateSystemTmpl<T>::resetValue_VerticalCoordinateSystemName()
{
    m_bVerticalCoordinateSystemName_valueSet = false;
}



template <class T>
void CoordinateSystemTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"CoordinateSystem";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bEpsgCode_valueSet)
    {
        stream.write(L" epsgCode=\"");
        StringObjectImpl::streamOut(m_EpsgCode, stream);
        stream.write(L"\"");
    }
    if (m_bOgcWktCode_valueSet)
    {
        stream.write(L" ogcWktCode=\"");
        StringObjectImpl::streamOut(m_OgcWktCode, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalDatum_valueSet)
    {
        stream.write(L" horizontalDatum=\"");
        StringObjectImpl::streamOut(m_HorizontalDatum, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalDatum_valueSet)
    {
        stream.write(L" verticalDatum=\"");
        StringObjectImpl::streamOut(m_VerticalDatum, stream);
        stream.write(L"\"");
    }
    if (m_bEllipsoidName_valueSet)
    {
        stream.write(L" ellipsoidName=\"");
        StringObjectImpl::streamOut(m_EllipsoidName, stream);
        stream.write(L"\"");
    }
    if (m_bHorizontalCoordinateSystemName_valueSet)
    {
        stream.write(L" horizontalCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_HorizontalCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bGeocentricCoordinateSystemName_valueSet)
    {
        stream.write(L" geocentricCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_GeocentricCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bFileLocation_valueSet)
    {
        stream.write(L" fileLocation=\"");
        StringObjectImpl::streamOut(m_FileLocation, stream);
        stream.write(L"\"");
    }
    if (m_bRotationAngle_valueSet)
    {
        stream.write(L" rotationAngle=\"");
        DoubleObjectImpl::streamOut(m_RotationAngle, stream);
        stream.write(L"\"");
    }
    if (m_bDatum_valueSet)
    {
        stream.write(L" datum=\"");
        StringObjectImpl::streamOut(m_Datum, stream);
        stream.write(L"\"");
    }
    if (m_bFittedCoordinateSystemName_valueSet)
    {
        stream.write(L" fittedCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_FittedCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bCompoundCoordinateSystemName_valueSet)
    {
        stream.write(L" compoundCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_CompoundCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bLocalCoordinateSystemName_valueSet)
    {
        stream.write(L" localCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_LocalCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bGeographicCoordinateSystemName_valueSet)
    {
        stream.write(L" geographicCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_GeographicCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bProjectedCoordinateSystemName_valueSet)
    {
        stream.write(L" projectedCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_ProjectedCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    if (m_bVerticalCoordinateSystemName_valueSet)
    {
        stream.write(L" verticalCoordinateSystemName=\"");
        StringObjectImpl::streamOut(m_VerticalCoordinateSystemName, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Start)
    {
    	m_Start->toXml(stream);
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
Object::ValidityEnum CoordinateSystemTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Start)
    {
        if (m_Start->validate(pEventSink) != Object::kValid)
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
