#include "stdafx.h"
#include "LXTypes.h"
#include "Curve.h"
#include "Start.h"
#include "Center.h"
#include "End.h"
#include "POI.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "CurveImpl.h"
#include "StartImpl.h"
#include "CenterImpl.h"
#include "EndImpl.h"
#include "POIImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
CurveTmpl<T>::CurveTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Start = NULL;
    m_Center = NULL;
    m_End = NULL;
    m_PI = NULL;
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Rot = EnumClockwise::Values::k_null;
    m_bRot_valueSet = false;
    m_Chord = 0.0;
    m_bChord_valueSet = false;
    m_CrvType = EnumCurveType::Values::k_null;
    m_bCrvType_valueSet = false;
    m_Delta = 0.0;
    m_bDelta_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_DirEnd = 0.0;
    m_bDirEnd_valueSet = false;
    m_DirStart = 0.0;
    m_bDirStart_valueSet = false;
    m_External = 0.0;
    m_bExternal_valueSet = false;
    m_Length = 0.0;
    m_bLength_valueSet = false;
    m_MidOrd = 0.0;
    m_bMidOrd_valueSet = false;
    m_Name = L"";
    m_bName_valueSet = false;
    m_Radius = 0.0;
    m_bRadius_valueSet = false;
    m_StaStart = 0.0;
    m_bStaStart_valueSet = false;
    m_State = EnumStateType::Values::k_null;
    m_bState_valueSet = false;
    m_Tangent = 0.0;
    m_bTangent_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_Note = L"";
    m_bNote_valueSet = false;
}


template<class T>
CurveTmpl<T>::~CurveTmpl ()
{
    if (m_Start != NULL)
    {
        m_Start->release();
        m_Start = NULL;
    }
    if (m_Center != NULL)
    {
        m_Center->release();
        m_Center = NULL;
    }
    if (m_End != NULL)
    {
        m_End->release();
        m_End = NULL;
    }
    if (m_PI != NULL)
    {
        m_PI->release();
        m_PI = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool CurveTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* CurveTmpl<T>::id() const
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
FeatureCollection& CurveTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& CurveTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Start* CurveTmpl<T>::getStart() const
{
    return m_Start;
}

template <class T>
void CurveTmpl<T>::setStart(Start* pValue)
{
    m_Start = pValue;
}

template <class T>
Center* CurveTmpl<T>::getCenter() const
{
    return m_Center;
}

template <class T>
void CurveTmpl<T>::setCenter(Center* pValue)
{
    m_Center = pValue;
}

template <class T>
End* CurveTmpl<T>::getEnd() const
{
    return m_End;
}

template <class T>
void CurveTmpl<T>::setEnd(End* pValue)
{
    m_End = pValue;
}

template <class T>
POI* CurveTmpl<T>::getPI() const
{
    return m_PI;
}

template <class T>
void CurveTmpl<T>::setPI(POI* pValue)
{
    m_PI = pValue;
}


template <class T>
EnumClockwise::Values CurveTmpl<T>::getRot() const
{
    return m_Rot;
}

template <class T>
void CurveTmpl<T>::setRot(EnumClockwise::Values value)
{
    m_Rot = value;
    m_bRot_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Rot() const
{
    return m_bRot_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Rot()
{
    m_bRot_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getChord() const
{
    return m_Chord;
}

template <class T>
void CurveTmpl<T>::setChord(double value)
{
    m_Chord = value;
    m_bChord_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Chord() const
{
    return m_bChord_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Chord()
{
    m_bChord_valueSet = false;
}


template <class T>
EnumCurveType::Values CurveTmpl<T>::getCrvType() const
{
    return m_CrvType;
}

template <class T>
void CurveTmpl<T>::setCrvType(EnumCurveType::Values value)
{
    m_CrvType = value;
    m_bCrvType_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_CrvType() const
{
    return m_bCrvType_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_CrvType()
{
    m_bCrvType_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getDelta() const
{
    return m_Delta;
}

template <class T>
void CurveTmpl<T>::setDelta(double value)
{
    m_Delta = value;
    m_bDelta_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Delta() const
{
    return m_bDelta_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Delta()
{
    m_bDelta_valueSet = false;
}


template <class T>
String CurveTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void CurveTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getDirEnd() const
{
    return m_DirEnd;
}

template <class T>
void CurveTmpl<T>::setDirEnd(double value)
{
    m_DirEnd = value;
    m_bDirEnd_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_DirEnd() const
{
    return m_bDirEnd_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_DirEnd()
{
    m_bDirEnd_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getDirStart() const
{
    return m_DirStart;
}

template <class T>
void CurveTmpl<T>::setDirStart(double value)
{
    m_DirStart = value;
    m_bDirStart_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_DirStart() const
{
    return m_bDirStart_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_DirStart()
{
    m_bDirStart_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getExternal() const
{
    return m_External;
}

template <class T>
void CurveTmpl<T>::setExternal(double value)
{
    m_External = value;
    m_bExternal_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_External() const
{
    return m_bExternal_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_External()
{
    m_bExternal_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getLength() const
{
    return m_Length;
}

template <class T>
void CurveTmpl<T>::setLength(double value)
{
    m_Length = value;
    m_bLength_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Length() const
{
    return m_bLength_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Length()
{
    m_bLength_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getMidOrd() const
{
    return m_MidOrd;
}

template <class T>
void CurveTmpl<T>::setMidOrd(double value)
{
    m_MidOrd = value;
    m_bMidOrd_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_MidOrd() const
{
    return m_bMidOrd_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_MidOrd()
{
    m_bMidOrd_valueSet = false;
}


template <class T>
String CurveTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void CurveTmpl<T>::setName(String value)
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
bool CurveTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getRadius() const
{
    return m_Radius;
}

template <class T>
void CurveTmpl<T>::setRadius(double value)
{
    m_Radius = value;
    m_bRadius_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Radius() const
{
    return m_bRadius_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Radius()
{
    m_bRadius_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getStaStart() const
{
    return m_StaStart;
}

template <class T>
void CurveTmpl<T>::setStaStart(double value)
{
    m_StaStart = value;
    m_bStaStart_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_StaStart() const
{
    return m_bStaStart_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_StaStart()
{
    m_bStaStart_valueSet = false;
}


template <class T>
EnumStateType::Values CurveTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void CurveTmpl<T>::setState(EnumStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
double CurveTmpl<T>::getTangent() const
{
    return m_Tangent;
}

template <class T>
void CurveTmpl<T>::setTangent(double value)
{
    m_Tangent = value;
    m_bTangent_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Tangent() const
{
    return m_bTangent_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Tangent()
{
    m_bTangent_valueSet = false;
}


template <class T>
String CurveTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void CurveTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
String CurveTmpl<T>::getNote() const
{
    return m_Note;
}

template <class T>
void CurveTmpl<T>::setNote(String value)
{
    m_Note = value;
    m_bNote_valueSet = true;
}

template <class T>
bool CurveTmpl<T>::hasValue_Note() const
{
    return m_bNote_valueSet;
}

template <class T>
void CurveTmpl<T>::resetValue_Note()
{
    m_bNote_valueSet = false;
}



template <class T>
void CurveTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Curve";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bRot_valueSet)
    {
        stream.write(L" rot=\"");
        EnumClockwiseImpl::streamOut(m_Rot, stream);
        stream.write(L"\"");
    }
    if (m_bChord_valueSet)
    {
        stream.write(L" chord=\"");
        DoubleObjectImpl::streamOut(m_Chord, stream);
        stream.write(L"\"");
    }
    if (m_bCrvType_valueSet)
    {
        stream.write(L" crvType=\"");
        EnumCurveTypeImpl::streamOut(m_CrvType, stream);
        stream.write(L"\"");
    }
    if (m_bDelta_valueSet)
    {
        stream.write(L" delta=\"");
        DoubleObjectImpl::streamOut(m_Delta, stream);
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
    if (m_bExternal_valueSet)
    {
        stream.write(L" external=\"");
        DoubleObjectImpl::streamOut(m_External, stream);
        stream.write(L"\"");
    }
    if (m_bLength_valueSet)
    {
        stream.write(L" length=\"");
        DoubleObjectImpl::streamOut(m_Length, stream);
        stream.write(L"\"");
    }
    if (m_bMidOrd_valueSet)
    {
        stream.write(L" midOrd=\"");
        DoubleObjectImpl::streamOut(m_MidOrd, stream);
        stream.write(L"\"");
    }
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bRadius_valueSet)
    {
        stream.write(L" radius=\"");
        DoubleObjectImpl::streamOut(m_Radius, stream);
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
    if (m_bTangent_valueSet)
    {
        stream.write(L" tangent=\"");
        DoubleObjectImpl::streamOut(m_Tangent, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bNote_valueSet)
    {
        stream.write(L" note=\"");
        StringObjectImpl::streamOut(m_Note, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Start)
    {
    	m_Start->toXml(stream);
    }
    if (m_Center)
    {
    	m_Center->toXml(stream);
    }
    if (m_End)
    {
    	m_End->toXml(stream);
    }
    if (m_PI)
    {
    	m_PI->toXml(stream);
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
Object::ValidityEnum CurveTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Start)
    {
        if (m_Start->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Center)
    {
        if (m_Center->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_End)
    {
        if (m_End->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_PI)
    {
        if (m_PI->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bRot_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Rot", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
