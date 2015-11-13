#include "stdafx.h"
#include "LXTypes.h"
#include "Spiral.h"
#include "Start.h"
#include "POI.h"
#include "End.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "SpiralImpl.h"
#include "StartImpl.h"
#include "POIImpl.h"
#include "EndImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
SpiralTmpl<T>::SpiralTmpl<T> (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Start = NULL;
    m_PI = NULL;
    m_End = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_RadiusEnd = 0.0;
    m_bRadiusEnd_valueSet = false;
    m_RadiusStart = 0.0;
    m_bRadiusStart_valueSet = false;
    m_Rot = EnumClockwise::Values::k_null;
    m_bRot_valueSet = false;
    m_SpiType = EnumSpiralType::Values::k_null;
    m_bSpiType_valueSet = false;
    m_Chord = 0.0;
    m_bChord_valueSet = false;
    m_Constant = 0.0;
    m_bConstant_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_DirEnd = 0.0;
    m_bDirEnd_valueSet = false;
    m_DirStart = 0.0;
    m_bDirStart_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Theta = 0.0;
    m_bTheta_valueSet = false;
    m_TotalY = 0.0;
    m_bTotalY_valueSet = false;
    m_TotalX = 0.0;
    m_bTotalX_valueSet = false;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_TanLong = 0.0;
    m_bTanLong_valueSet = false;
    m_TanShort = 0.0;
    m_bTanShort_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
}


template<class T>
SpiralTmpl<T>::~SpiralTmpl<T> ()
{
    if (m_Start != NULL)
    {
        m_Start->release();
        m_Start = NULL;
    }
    if (m_PI != NULL)
    {
        m_PI->release();
        m_PI = NULL;
    }
    if (m_End != NULL)
    {
        m_End->release();
        m_End = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool SpiralTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* SpiralTmpl<T>::id() const
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
FeatureCollection& SpiralTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& SpiralTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Start* SpiralTmpl<T>::getStart() const
{
    return m_Start;
}

template <class T>
void SpiralTmpl<T>::setStart(Start* pValue)
{
    m_Start = pValue;
}

template <class T>
POI* SpiralTmpl<T>::getPI() const
{
    return m_PI;
}

template <class T>
void SpiralTmpl<T>::setPI(POI* pValue)
{
    m_PI = pValue;
}

template <class T>
End* SpiralTmpl<T>::getEnd() const
{
    return m_End;
}

template <class T>
void SpiralTmpl<T>::setEnd(End* pValue)
{
    m_End = pValue;
}


template <class T>
double SpiralTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void SpiralTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getRadiusEnd() const
{
    return m_RadiusEnd;
}

template <class T>
void SpiralTmpl<T>::setRadiusEnd(double value)
{
    m_RadiusEnd = value;
    m_bRadiusEnd_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_RadiusEnd() const
{
    return m_bRadiusEnd_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_RadiusEnd()
{
    m_bRadiusEnd_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getRadiusStart() const
{
    return m_RadiusStart;
}

template <class T>
void SpiralTmpl<T>::setRadiusStart(double value)
{
    m_RadiusStart = value;
    m_bRadiusStart_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_RadiusStart() const
{
    return m_bRadiusStart_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_RadiusStart()
{
    m_bRadiusStart_valueSet = false;
}


template <class T>
EnumClockwise::Values SpiralTmpl<T>::getRot() const
{
    return m_Rot;
}

template <class T>
void SpiralTmpl<T>::setRot(EnumClockwise::Values value)
{
    m_Rot = value;
    m_bRot_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_Rot() const
{
    return m_bRot_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Rot()
{
    m_bRot_valueSet = false;
}


template <class T>
EnumSpiralType::Values SpiralTmpl<T>::getSpiType() const
{
    return m_SpiType;
}

template <class T>
void SpiralTmpl<T>::setSpiType(EnumSpiralType::Values value)
{
    m_SpiType = value;
    m_bSpiType_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_SpiType() const
{
    return m_bSpiType_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_SpiType()
{
    m_bSpiType_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getChord() const
{
    return m_Chord;
}

template <class T>
void SpiralTmpl<T>::setChord(double value)
{
    m_Chord = value;
    m_bChord_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_Chord() const
{
    return m_bChord_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Chord()
{
    m_bChord_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getConstant() const
{
    return m_Constant;
}

template <class T>
void SpiralTmpl<T>::setConstant(double value)
{
    m_Constant = value;
    m_bConstant_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_Constant() const
{
    return m_bConstant_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Constant()
{
    m_bConstant_valueSet = false;
}


template <class T>
String SpiralTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void SpiralTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getDirEnd() const
{
    return m_DirEnd;
}

template <class T>
void SpiralTmpl<T>::setDirEnd(double value)
{
    m_DirEnd = value;
    m_bDirEnd_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_DirEnd() const
{
    return m_bDirEnd_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_DirEnd()
{
    m_bDirEnd_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getDirStart() const
{
    return m_DirStart;
}

template <class T>
void SpiralTmpl<T>::setDirStart(double value)
{
    m_DirStart = value;
    m_bDirStart_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_DirStart() const
{
    return m_bDirStart_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_DirStart()
{
    m_bDirStart_valueSet = false;
}


template <class T>
String SpiralTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void SpiralTmpl<T>::setName(String value)
{
    String oldValue = m_Name;
    m_Name = value;
    if (m_pCollectionLocation)
    {
        // We are in a collection. Now check to make sure we are in a named collection.
        NamedCollectionLocation* pNamedCollLoc = dynamic_cast<NamedCollectionLocation*>(m_pCollectionLocation);
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
bool SpiralTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getTheta() const
{
    return m_Theta;
}

template <class T>
void SpiralTmpl<T>::setTheta(double value)
{
    m_Theta = value;
    m_bTheta_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_Theta() const
{
    return m_bTheta_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_Theta()
{
    m_bTheta_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getTotalY() const
{
    return m_TotalY;
}

template <class T>
void SpiralTmpl<T>::setTotalY(double value)
{
    m_TotalY = value;
    m_bTotalY_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_TotalY() const
{
    return m_bTotalY_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_TotalY()
{
    m_bTotalY_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getTotalX() const
{
    return m_TotalX;
}

template <class T>
void SpiralTmpl<T>::setTotalX(double value)
{
    m_TotalX = value;
    m_bTotalX_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_TotalX() const
{
    return m_bTotalX_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_TotalX()
{
    m_bTotalX_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void SpiralTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
EnumStateType::Values SpiralTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void SpiralTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getTanLong() const
{
    return m_TanLong;
}

template <class T>
void SpiralTmpl<T>::setTanLong(double value)
{
    m_TanLong = value;
    m_bTanLong_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_TanLong() const
{
    return m_bTanLong_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_TanLong()
{
    m_bTanLong_valueSet = false;
}


template <class T>
double SpiralTmpl<T>::getTanShort() const
{
    return m_TanShort;
}

template <class T>
void SpiralTmpl<T>::setTanShort(double value)
{
    m_TanShort = value;
    m_bTanShort_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_TanShort() const
{
    return m_bTanShort_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_TanShort()
{
    m_bTanShort_valueSet = false;
}


template <class T>
String SpiralTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void SpiralTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool SpiralTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void SpiralTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}



template <class T>
void SpiralTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Spiral";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bRadiusEnd_valueSet)
    {
        stream.write(L" radiusEnd=\"");
        DoubleObjectImpl::streamOut(m_RadiusEnd, stream);
        stream.write(L"\"");
    }
    if (m_bRadiusStart_valueSet)
    {
        stream.write(L" radiusStart=\"");
        DoubleObjectImpl::streamOut(m_RadiusStart, stream);
        stream.write(L"\"");
    }
    if (m_bRot_valueSet)
    {
        stream.write(L" rot=\"");
        EnumClockwiseImpl::streamOut(m_Rot, stream);
        stream.write(L"\"");
    }
    if (m_bSpiType_valueSet)
    {
        stream.write(L" spiType=\"");
        EnumSpiralTypeImpl::streamOut(m_SpiType, stream);
        stream.write(L"\"");
    }
    if (m_bChord_valueSet)
    {
        stream.write(L" chord=\"");
        DoubleObjectImpl::streamOut(m_Chord, stream);
        stream.write(L"\"");
    }
    if (m_bConstant_valueSet)
    {
        stream.write(L" constant=\"");
        DoubleObjectImpl::streamOut(m_Constant, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bDirEnd_valueSet)
    {
        stream.write(L" dirEnd=\"");
        DoubleObjectImpl::streamOut(m_DirEnd, stream);
        stream.write(L"\"");
    }
    if (m_bDirStart_valueSet)
    {
        stream.write(L" dirStart=\"");
        DoubleObjectImpl::streamOut(m_DirStart, stream);
        stream.write(L"\"");
    }
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bTheta_valueSet)
    {
        stream.write(L" theta=\"");
        DoubleObjectImpl::streamOut(m_Theta, stream);
        stream.write(L"\"");
    }
    if (m_bTotalY_valueSet)
    {
        stream.write(L" totalY=\"");
        DoubleObjectImpl::streamOut(m_TotalY, stream);
        stream.write(L"\"");
    }
    if (m_bTotalX_valueSet)
    {
        stream.write(L" totalX=\"");
        DoubleObjectImpl::streamOut(m_TotalX, stream);
        stream.write(L"\"");
    }
    if (m_bStaStart_valueSet)
    {
        stream.write(L" staStart=\"");
        DoubleObjectImpl::streamOut(m_StaStart, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bTanLong_valueSet)
    {
        stream.write(L" tanLong=\"");
        DoubleObjectImpl::streamOut(m_TanLong, stream);
        stream.write(L"\"");
    }
    if (m_bTanShort_valueSet)
    {
        stream.write(L" tanShort=\"");
        DoubleObjectImpl::streamOut(m_TanShort, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Start)
    {
    	m_Start->toXml(stream);
    }
    if (m_PI)
    {
    	m_PI->toXml(stream);
    }
    if (m_End)
    {
    	m_End->toXml(stream);
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
Object::ValidityEnum SpiralTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Start)
    {
        if (m_Start->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PI)
    {
        if (m_PI->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_End)
    {
        if (m_End->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bLength_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Length", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRadiusEnd_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"RadiusEnd", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRadiusStart_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"RadiusStart", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bRot_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Rot", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    if (!m_bSpiType_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"SpiType", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
