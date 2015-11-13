#include "stdafx.h"
#include "LXTypes.h"
#include "LandXML.h"
#include "Units.h"
#include "CoordinateSystem.h"
#include "Project.h"
#include "Application.h"
#include "CgPointsCollection.h"
#include "AlignmentsCollection.h"
#include "AmendmentCollection.h"
#include "GradeModelCollection.h"
#include "MonumentsCollection.h"
#include "ParcelsCollection.h"
#include "PlanFeaturesCollection.h"
#include "PipeNetworksCollection.h"
#include "RoadwaysCollection.h"
#include "SurfacesCollection.h"
#include "SurveyCollection.h"
#include "FeatureDictionaryCollection.h"
#include "LXTypesTmpl.h"
#include "LandXMLImpl.h"
#include "UnitsImpl.h"
#include "CoordinateSystemImpl.h"
#include "ProjectImpl.h"
#include "ApplicationImpl.h"
#include "CgPointsCollectionImpl.h"
#include "AlignmentsCollectionImpl.h"
#include "AmendmentCollectionImpl.h"
#include "GradeModelCollectionImpl.h"
#include "MonumentsCollectionImpl.h"
#include "ParcelsCollectionImpl.h"
#include "PlanFeaturesCollectionImpl.h"
#include "PipeNetworksCollectionImpl.h"
#include "RoadwaysCollectionImpl.h"
#include "SurfacesCollectionImpl.h"
#include "SurveyCollectionImpl.h"
#include "FeatureDictionaryCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
LandXMLTmpl<T>::LandXMLTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Units = NULL;
    m_CoordinateSystem = NULL;
    m_Project = NULL;
    m_Application = NULL;
    m_CgPoints = createCgPointsCollectionObject(pDoc);
    m_Alignments = createAlignmentsCollectionObject(pDoc);
    m_Amendment = createAmendmentCollectionObject(pDoc);
    m_GradeModel = createGradeModelCollectionObject(pDoc);
    m_Monuments = createMonumentsCollectionObject(pDoc);
    m_Parcels = createParcelsCollectionObject(pDoc);
    m_PlanFeatures = createPlanFeaturesCollectionObject(pDoc);
    m_PipeNetworks = createPipeNetworksCollectionObject(pDoc);
    m_Roadways = createRoadwaysCollectionObject(pDoc);
    m_Surfaces = createSurfacesCollectionObject(pDoc);
    m_Survey = createSurveyCollectionObject(pDoc);
    m_FeatureDictionary = createFeatureDictionaryCollectionObject(pDoc);
    m_AnyXml = NULL;
    m_Date = L"";
    m_bDate_valueSet = false;
    m_Time = L"";
    m_bTime_valueSet = false;
    m_Version = L"1.2";
    m_bVersion_valueSet = false;
    m_Language = L"";
    m_bLanguage_valueSet = false;
    m_ReadOnly = false;
    m_bReadOnly_valueSet = false;
    m_LandXMLId = 0;
    m_bLandXMLId_valueSet = false;
    m_Crc = 0;
    m_bCrc_valueSet = false;
}


template<class T>
LandXMLTmpl<T>::~LandXMLTmpl<T> ()
{
    if (m_Units != NULL)
    {
        m_Units->release();
        m_Units = NULL;
    }
    if (m_CoordinateSystem != NULL)
    {
        m_CoordinateSystem->release();
        m_CoordinateSystem = NULL;
    }
    if (m_Project != NULL)
    {
        m_Project->release();
        m_Project = NULL;
    }
    if (m_Application != NULL)
    {
        m_Application->release();
        m_Application = NULL;
    }
    if (m_CgPoints != NULL)
    {
        m_CgPoints->release();
        m_CgPoints = NULL;
    }
    if (m_Alignments != NULL)
    {
        m_Alignments->release();
        m_Alignments = NULL;
    }
    if (m_Amendment != NULL)
    {
        m_Amendment->release();
        m_Amendment = NULL;
    }
    if (m_GradeModel != NULL)
    {
        m_GradeModel->release();
        m_GradeModel = NULL;
    }
    if (m_Monuments != NULL)
    {
        m_Monuments->release();
        m_Monuments = NULL;
    }
    if (m_Parcels != NULL)
    {
        m_Parcels->release();
        m_Parcels = NULL;
    }
    if (m_PlanFeatures != NULL)
    {
        m_PlanFeatures->release();
        m_PlanFeatures = NULL;
    }
    if (m_PipeNetworks != NULL)
    {
        m_PipeNetworks->release();
        m_PipeNetworks = NULL;
    }
    if (m_Roadways != NULL)
    {
        m_Roadways->release();
        m_Roadways = NULL;
    }
    if (m_Surfaces != NULL)
    {
        m_Surfaces->release();
        m_Surfaces = NULL;
    }
    if (m_Survey != NULL)
    {
        m_Survey->release();
        m_Survey = NULL;
    }
    if (m_FeatureDictionary != NULL)
    {
        m_FeatureDictionary->release();
        m_FeatureDictionary = NULL;
    }
}

template <class T>
CgPointsCollection& LandXMLTmpl<T>::CgPoints()
{
    return *m_CgPoints;
}

template <class T>
const CgPointsCollection& LandXMLTmpl<T>::CgPoints() const
{
    return *m_CgPoints;
}

template <class T>
AlignmentsCollection& LandXMLTmpl<T>::Alignments()
{
    return *m_Alignments;
}

template <class T>
const AlignmentsCollection& LandXMLTmpl<T>::Alignments() const
{
    return *m_Alignments;
}

template <class T>
AmendmentCollection& LandXMLTmpl<T>::Amendment()
{
    return *m_Amendment;
}

template <class T>
const AmendmentCollection& LandXMLTmpl<T>::Amendment() const
{
    return *m_Amendment;
}

template <class T>
GradeModelCollection& LandXMLTmpl<T>::GradeModel()
{
    return *m_GradeModel;
}

template <class T>
const GradeModelCollection& LandXMLTmpl<T>::GradeModel() const
{
    return *m_GradeModel;
}

template <class T>
MonumentsCollection& LandXMLTmpl<T>::Monuments()
{
    return *m_Monuments;
}

template <class T>
const MonumentsCollection& LandXMLTmpl<T>::Monuments() const
{
    return *m_Monuments;
}

template <class T>
ParcelsCollection& LandXMLTmpl<T>::Parcels()
{
    return *m_Parcels;
}

template <class T>
const ParcelsCollection& LandXMLTmpl<T>::Parcels() const
{
    return *m_Parcels;
}

template <class T>
PlanFeaturesCollection& LandXMLTmpl<T>::PlanFeatures()
{
    return *m_PlanFeatures;
}

template <class T>
const PlanFeaturesCollection& LandXMLTmpl<T>::PlanFeatures() const
{
    return *m_PlanFeatures;
}

template <class T>
PipeNetworksCollection& LandXMLTmpl<T>::PipeNetworks()
{
    return *m_PipeNetworks;
}

template <class T>
const PipeNetworksCollection& LandXMLTmpl<T>::PipeNetworks() const
{
    return *m_PipeNetworks;
}

template <class T>
RoadwaysCollection& LandXMLTmpl<T>::Roadways()
{
    return *m_Roadways;
}

template <class T>
const RoadwaysCollection& LandXMLTmpl<T>::Roadways() const
{
    return *m_Roadways;
}

template <class T>
SurfacesCollection& LandXMLTmpl<T>::Surfaces()
{
    return *m_Surfaces;
}

template <class T>
const SurfacesCollection& LandXMLTmpl<T>::Surfaces() const
{
    return *m_Surfaces;
}

template <class T>
SurveyCollection& LandXMLTmpl<T>::Survey()
{
    return *m_Survey;
}

template <class T>
const SurveyCollection& LandXMLTmpl<T>::Survey() const
{
    return *m_Survey;
}

template <class T>
FeatureDictionaryCollection& LandXMLTmpl<T>::FeatureDictionary()
{
    return *m_FeatureDictionary;
}

template <class T>
const FeatureDictionaryCollection& LandXMLTmpl<T>::FeatureDictionary() const
{
    return *m_FeatureDictionary;
}


template <class T>
Units* LandXMLTmpl<T>::getUnits() const
{
    return m_Units;
}

template <class T>
void LandXMLTmpl<T>::setUnits(Units* pValue)
{
    m_Units = pValue;
}

template <class T>
CoordinateSystem* LandXMLTmpl<T>::getCoordinateSystem() const
{
    return m_CoordinateSystem;
}

template <class T>
void LandXMLTmpl<T>::setCoordinateSystem(CoordinateSystem* pValue)
{
    m_CoordinateSystem = pValue;
}

template <class T>
Project* LandXMLTmpl<T>::getProject() const
{
    return m_Project;
}

template <class T>
void LandXMLTmpl<T>::setProject(Project* pValue)
{
    m_Project = pValue;
}

template <class T>
Application* LandXMLTmpl<T>::getApplication() const
{
    return m_Application;
}

template <class T>
void LandXMLTmpl<T>::setApplication(Application* pValue)
{
    m_Application = pValue;
}

template <class T>
Object* LandXMLTmpl<T>::getAnyXml() const
{
    return m_AnyXml;
}

template <class T>
void LandXMLTmpl<T>::setAnyXml(Object* pValue)
{
    m_AnyXml = pValue;
}


template <class T>
String LandXMLTmpl<T>::getDate() const
{
    return m_Date;
}

template <class T>
void LandXMLTmpl<T>::setDate(String value)
{
    m_Date = value;
    m_bDate_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_Date() const
{
    return m_bDate_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_Date()
{
    m_bDate_valueSet = false;
}


template <class T>
String LandXMLTmpl<T>::getTime() const
{
    return m_Time;
}

template <class T>
void LandXMLTmpl<T>::setTime(String value)
{
    m_Time = value;
    m_bTime_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_Time() const
{
    return m_bTime_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_Time()
{
    m_bTime_valueSet = false;
}


template <class T>
String LandXMLTmpl<T>::getVersion() const
{
    return m_Version;
}

template <class T>
void LandXMLTmpl<T>::setVersion(String value)
{
    m_Version = value;
    m_bVersion_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_Version() const
{
    return m_bVersion_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_Version()
{
    m_bVersion_valueSet = false;
}


template <class T>
String LandXMLTmpl<T>::getLanguage() const
{
    return m_Language;
}

template <class T>
void LandXMLTmpl<T>::setLanguage(String value)
{
    m_Language = value;
    m_bLanguage_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_Language() const
{
    return m_bLanguage_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_Language()
{
    m_bLanguage_valueSet = false;
}


template <class T>
bool LandXMLTmpl<T>::getReadOnly() const
{
    return m_ReadOnly;
}

template <class T>
void LandXMLTmpl<T>::setReadOnly(bool value)
{
    m_ReadOnly = value;
    m_bReadOnly_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_ReadOnly() const
{
    return m_bReadOnly_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_ReadOnly()
{
    m_bReadOnly_valueSet = false;
}


template <class T>
int LandXMLTmpl<T>::getLandXMLId() const
{
    return m_LandXMLId;
}

template <class T>
void LandXMLTmpl<T>::setLandXMLId(int value)
{
    m_LandXMLId = value;
    m_bLandXMLId_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_LandXMLId() const
{
    return m_bLandXMLId_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_LandXMLId()
{
    m_bLandXMLId_valueSet = false;
}


template <class T>
int LandXMLTmpl<T>::getCrc() const
{
    return m_Crc;
}

template <class T>
void LandXMLTmpl<T>::setCrc(int value)
{
    m_Crc = value;
    m_bCrc_valueSet = true;
}

template <class T>
bool LandXMLTmpl<T>::hasValue_Crc() const
{
    return m_bCrc_valueSet;
}

template <class T>
void LandXMLTmpl<T>::resetValue_Crc()
{
    m_bCrc_valueSet = false;
}



template <class T>
void LandXMLTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"LandXML";
    stream.write(L"<LandXML xmlns=\"http://www.landxml.org/schema/LandXML-1.2\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:schemaLocation=\"http://www.landxml.org/schema/LandXML-1.2 http://www.landxml.org/schema/LandXML-1.2/LandXML-1.2.xsd\"");
    if (m_bDate_valueSet)
    {
        stream.write(L" date=\"");
        StringObjectImpl::streamOut(m_Date, stream);
        stream.write(L"\"");
    }
    if (m_bTime_valueSet)
    {
        stream.write(L" time=\"");
        StringObjectImpl::streamOut(m_Time, stream);
        stream.write(L"\"");
    }
    if (m_bVersion_valueSet)
    {
        stream.write(L" version=\"");
        StringObjectImpl::streamOut(m_Version, stream);
        stream.write(L"\"");
    }
    if (m_bLanguage_valueSet)
    {
        stream.write(L" language=\"");
        StringObjectImpl::streamOut(m_Language, stream);
        stream.write(L"\"");
    }
    if (m_bReadOnly_valueSet)
    {
        stream.write(L" readOnly=\"");
        BooleanObjectImpl::streamOut(m_ReadOnly, stream);
        stream.write(L"\"");
    }
    if (m_bLandXMLId_valueSet)
    {
        stream.write(L" LandXMLId=\"");
        IntegerObjectImpl::streamOut(m_LandXMLId, stream);
        stream.write(L"\"");
    }
    if (m_bCrc_valueSet)
    {
        stream.write(L" crc=\"");
        IntegerObjectImpl::streamOut(m_Crc, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Units)
    {
    	m_Units->toXml(stream);
    }
    if (m_CoordinateSystem)
    {
    	m_CoordinateSystem->toXml(stream);
    }
    if (m_Project)
    {
    	m_Project->toXml(stream);
    }
    if (m_Application)
    {
    	m_Application->toXml(stream);
    }
    if (m_CgPoints)
    {
    	m_CgPoints->toXml(stream);
    }
    if (m_Alignments)
    {
    	m_Alignments->toXml(stream);
    }
    if (m_Amendment)
    {
    	m_Amendment->toXml(stream);
    }
    if (m_GradeModel)
    {
    	m_GradeModel->toXml(stream);
    }
    if (m_Monuments)
    {
    	m_Monuments->toXml(stream);
    }
    if (m_Parcels)
    {
    	m_Parcels->toXml(stream);
    }
    if (m_PlanFeatures)
    {
    	m_PlanFeatures->toXml(stream);
    }
    if (m_PipeNetworks)
    {
    	m_PipeNetworks->toXml(stream);
    }
    if (m_Roadways)
    {
    	m_Roadways->toXml(stream);
    }
    if (m_Surfaces)
    {
    	m_Surfaces->toXml(stream);
    }
    if (m_Survey)
    {
    	m_Survey->toXml(stream);
    }
    if (m_FeatureDictionary)
    {
    	m_FeatureDictionary->toXml(stream);
    }
    if (m_AnyXml)
    {
    	m_AnyXml->toXml(stream);
    }
    stream.write(L"</");
    stream.write(kstrElementName);
    stream.write(L">");
}

template <class T>
Object::ValidityEnum LandXMLTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Units)
    {
        if (m_Units->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CoordinateSystem)
    {
        if (m_CoordinateSystem->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Project)
    {
        if (m_Project->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Application)
    {
        if (m_Application->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CgPoints)
    {
        if (m_CgPoints->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Alignments)
    {
        if (m_Alignments->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Amendment)
    {
        if (m_Amendment->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_GradeModel)
    {
        if (m_GradeModel->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Monuments)
    {
        if (m_Monuments->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Parcels)
    {
        if (m_Parcels->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PlanFeatures)
    {
        if (m_PlanFeatures->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PipeNetworks)
    {
        if (m_PipeNetworks->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Roadways)
    {
        if (m_Roadways->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Surfaces)
    {
        if (m_Surfaces->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Survey)
    {
        if (m_Survey->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_FeatureDictionary)
    {
        if (m_FeatureDictionary->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bDate_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Date", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bTime_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Time", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bVersion_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Version", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
