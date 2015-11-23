#include "stdafx.h"
#include "LXTypes.h"
#include "Parcel.h"
#include "Center.h"
#include "CoordGeom.h"
#include "VolumeGeom.h"
#include "Parcels.h"
#include "TitleCollection.h"
#include "ExclusionsCollection.h"
#include "LocationAddressCollection.h"
#include "FeatureCollection.h"
#include "LXTypesTmpl.h"
#include "ParcelImpl.h"
#include "CenterImpl.h"
#include "CoordGeomImpl.h"
#include "VolumeGeomImpl.h"
#include "ParcelsImpl.h"
#include "TitleCollectionImpl.h"
#include "ExclusionsCollectionImpl.h"
#include "LocationAddressCollectionImpl.h"
#include "FeatureCollectionImpl.h"
#include "LXTypesTmpl.inl"

namespace LX
{


template<class T>
ParcelTmpl<T>::ParcelTmpl (DocumentImpl* pDoc)
    : ObjectTmpl<T>(pDoc)
{
    m_Center = NULL;
    m_CoordGeom = NULL;
    m_VolumeGeom = NULL;
    m_Parcels = NULL;
    m_Title = createTitleCollectionObject(pDoc);
    m_Exclusions = createExclusionsCollectionObject(pDoc);
    m_LocationAddress = createLocationAddressCollectionObject(pDoc);
    m_Feature = createFeatureCollectionObject(pDoc);
    m_Name = L"";
    m_bName_valueSet = false;
    m_OID = L"";
    m_bOID_valueSet = false;
    m_Area = 0.0;
    m_bArea_valueSet = false;
    m_Desc = L"";
    m_bDesc_valueSet = false;
    m_DirClosure = 0.0;
    m_bDirClosure_valueSet = false;
    m_DistClosure = 0.0;
    m_bDistClosure_valueSet = false;
    m_Owner = L"";
    m_bOwner_valueSet = false;
    m_ParcelType = L"";
    m_bParcelType_valueSet = false;
    m_SetbackFront = 0.0;
    m_bSetbackFront_valueSet = false;
    m_SetbackRear = 0.0;
    m_bSetbackRear_valueSet = false;
    m_SetbackSide = 0.0;
    m_bSetbackSide_valueSet = false;
    m_State = EnumParcelStateType::Values::k_null;
    m_bState_valueSet = false;
    m_TaxId = L"";
    m_bTaxId_valueSet = false;
    m_Class = L"";
    m_bClass_valueSet = false;
    m_UseOfParcel = L"";
    m_bUseOfParcel_valueSet = false;
    m_ParcelFormat = L"";
    m_bParcelFormat_valueSet = false;
    m_BuildingNo = L"";
    m_bBuildingNo_valueSet = false;
    m_BuildingLevelNo = L"";
    m_bBuildingLevelNo_valueSet = false;
    m_Volume = L"";
    m_bVolume_valueSet = false;
    m_PclRef = L"";
    m_bPclRef_valueSet = false;
    m_LotEntitlements = L"";
    m_bLotEntitlements_valueSet = false;
    m_LiabilityApportionment = L"";
    m_bLiabilityApportionment_valueSet = false;
}


template<class T>
ParcelTmpl<T>::~ParcelTmpl ()
{
    if (m_Center != NULL)
    {
        m_Center->release();
        m_Center = NULL;
    }
    if (m_CoordGeom != NULL)
    {
        m_CoordGeom->release();
        m_CoordGeom = NULL;
    }
    if (m_VolumeGeom != NULL)
    {
        m_VolumeGeom->release();
        m_VolumeGeom = NULL;
    }
    if (m_Parcels != NULL)
    {
        m_Parcels->release();
        m_Parcels = NULL;
    }
    if (m_Title != NULL)
    {
        m_Title->release();
        m_Title = NULL;
    }
    if (m_Exclusions != NULL)
    {
        m_Exclusions->release();
        m_Exclusions = NULL;
    }
    if (m_LocationAddress != NULL)
    {
        m_LocationAddress->release();
        m_LocationAddress = NULL;
    }
    if (m_Feature != NULL)
    {
        m_Feature->release();
        m_Feature = NULL;
    }
}


template <class T>
bool ParcelTmpl<T>::getObjectId(const String*& pId) const
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
ValueObject* ParcelTmpl<T>::id() const
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
TitleCollection& ParcelTmpl<T>::Title()
{
    return *m_Title;
}

template <class T>
const TitleCollection& ParcelTmpl<T>::Title() const
{
    return *m_Title;
}

template <class T>
ExclusionsCollection& ParcelTmpl<T>::Exclusions()
{
    return *m_Exclusions;
}

template <class T>
const ExclusionsCollection& ParcelTmpl<T>::Exclusions() const
{
    return *m_Exclusions;
}

template <class T>
LocationAddressCollection& ParcelTmpl<T>::LocationAddress()
{
    return *m_LocationAddress;
}

template <class T>
const LocationAddressCollection& ParcelTmpl<T>::LocationAddress() const
{
    return *m_LocationAddress;
}

template <class T>
FeatureCollection& ParcelTmpl<T>::Feature()
{
    return *m_Feature;
}

template <class T>
const FeatureCollection& ParcelTmpl<T>::Feature() const
{
    return *m_Feature;
}


template <class T>
Center* ParcelTmpl<T>::getCenter() const
{
    return m_Center;
}

template <class T>
void ParcelTmpl<T>::setCenter(Center* pValue)
{
    m_Center = pValue;
}

template <class T>
CoordGeom* ParcelTmpl<T>::getCoordGeom() const
{
    return m_CoordGeom;
}

template <class T>
void ParcelTmpl<T>::setCoordGeom(CoordGeom* pValue)
{
    m_CoordGeom = pValue;
}

template <class T>
VolumeGeom* ParcelTmpl<T>::getVolumeGeom() const
{
    return m_VolumeGeom;
}

template <class T>
void ParcelTmpl<T>::setVolumeGeom(VolumeGeom* pValue)
{
    m_VolumeGeom = pValue;
}

template <class T>
Parcels* ParcelTmpl<T>::getParcels() const
{
    return m_Parcels;
}

template <class T>
void ParcelTmpl<T>::setParcels(Parcels* pValue)
{
    m_Parcels = pValue;
}


template <class T>
String ParcelTmpl<T>::getName() const
{
    return m_Name;
}

template <class T>
void ParcelTmpl<T>::setName(String value)
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
bool ParcelTmpl<T>::hasValue_Name() const
{
    return m_bName_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_Name()
{
    m_bName_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getOID() const
{
    return m_OID;
}

template <class T>
void ParcelTmpl<T>::setOID(String value)
{
    m_OID = value;
    m_bOID_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_OID() const
{
    return m_bOID_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_OID()
{
    m_bOID_valueSet = false;
}


template <class T>
double ParcelTmpl<T>::getArea() const
{
    return m_Area;
}

template <class T>
void ParcelTmpl<T>::setArea(double value)
{
    m_Area = value;
    m_bArea_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_Area() const
{
    return m_bArea_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_Area()
{
    m_bArea_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getDesc() const
{
    return m_Desc;
}

template <class T>
void ParcelTmpl<T>::setDesc(String value)
{
    m_Desc = value;
    m_bDesc_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_Desc() const
{
    return m_bDesc_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_Desc()
{
    m_bDesc_valueSet = false;
}


template <class T>
double ParcelTmpl<T>::getDirClosure() const
{
    return m_DirClosure;
}

template <class T>
void ParcelTmpl<T>::setDirClosure(double value)
{
    m_DirClosure = value;
    m_bDirClosure_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_DirClosure() const
{
    return m_bDirClosure_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_DirClosure()
{
    m_bDirClosure_valueSet = false;
}


template <class T>
double ParcelTmpl<T>::getDistClosure() const
{
    return m_DistClosure;
}

template <class T>
void ParcelTmpl<T>::setDistClosure(double value)
{
    m_DistClosure = value;
    m_bDistClosure_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_DistClosure() const
{
    return m_bDistClosure_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_DistClosure()
{
    m_bDistClosure_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getOwner() const
{
    return m_Owner;
}

template <class T>
void ParcelTmpl<T>::setOwner(String value)
{
    m_Owner = value;
    m_bOwner_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_Owner() const
{
    return m_bOwner_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_Owner()
{
    m_bOwner_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getParcelType() const
{
    return m_ParcelType;
}

template <class T>
void ParcelTmpl<T>::setParcelType(String value)
{
    m_ParcelType = value;
    m_bParcelType_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_ParcelType() const
{
    return m_bParcelType_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_ParcelType()
{
    m_bParcelType_valueSet = false;
}


template <class T>
double ParcelTmpl<T>::getSetbackFront() const
{
    return m_SetbackFront;
}

template <class T>
void ParcelTmpl<T>::setSetbackFront(double value)
{
    m_SetbackFront = value;
    m_bSetbackFront_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_SetbackFront() const
{
    return m_bSetbackFront_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_SetbackFront()
{
    m_bSetbackFront_valueSet = false;
}


template <class T>
double ParcelTmpl<T>::getSetbackRear() const
{
    return m_SetbackRear;
}

template <class T>
void ParcelTmpl<T>::setSetbackRear(double value)
{
    m_SetbackRear = value;
    m_bSetbackRear_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_SetbackRear() const
{
    return m_bSetbackRear_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_SetbackRear()
{
    m_bSetbackRear_valueSet = false;
}


template <class T>
double ParcelTmpl<T>::getSetbackSide() const
{
    return m_SetbackSide;
}

template <class T>
void ParcelTmpl<T>::setSetbackSide(double value)
{
    m_SetbackSide = value;
    m_bSetbackSide_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_SetbackSide() const
{
    return m_bSetbackSide_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_SetbackSide()
{
    m_bSetbackSide_valueSet = false;
}


template <class T>
EnumParcelStateType::Values ParcelTmpl<T>::getState() const
{
    return m_State;
}

template <class T>
void ParcelTmpl<T>::setState(EnumParcelStateType::Values value)
{
    m_State = value;
    m_bState_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_State() const
{
    return m_bState_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_State()
{
    m_bState_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getTaxId() const
{
    return m_TaxId;
}

template <class T>
void ParcelTmpl<T>::setTaxId(String value)
{
    m_TaxId = value;
    m_bTaxId_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_TaxId() const
{
    return m_bTaxId_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_TaxId()
{
    m_bTaxId_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getClass() const
{
    return m_Class;
}

template <class T>
void ParcelTmpl<T>::setClass(String value)
{
    m_Class = value;
    m_bClass_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_Class() const
{
    return m_bClass_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_Class()
{
    m_bClass_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getUseOfParcel() const
{
    return m_UseOfParcel;
}

template <class T>
void ParcelTmpl<T>::setUseOfParcel(String value)
{
    m_UseOfParcel = value;
    m_bUseOfParcel_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_UseOfParcel() const
{
    return m_bUseOfParcel_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_UseOfParcel()
{
    m_bUseOfParcel_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getParcelFormat() const
{
    return m_ParcelFormat;
}

template <class T>
void ParcelTmpl<T>::setParcelFormat(String value)
{
    m_ParcelFormat = value;
    m_bParcelFormat_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_ParcelFormat() const
{
    return m_bParcelFormat_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_ParcelFormat()
{
    m_bParcelFormat_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getBuildingNo() const
{
    return m_BuildingNo;
}

template <class T>
void ParcelTmpl<T>::setBuildingNo(String value)
{
    m_BuildingNo = value;
    m_bBuildingNo_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_BuildingNo() const
{
    return m_bBuildingNo_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_BuildingNo()
{
    m_bBuildingNo_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getBuildingLevelNo() const
{
    return m_BuildingLevelNo;
}

template <class T>
void ParcelTmpl<T>::setBuildingLevelNo(String value)
{
    m_BuildingLevelNo = value;
    m_bBuildingLevelNo_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_BuildingLevelNo() const
{
    return m_bBuildingLevelNo_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_BuildingLevelNo()
{
    m_bBuildingLevelNo_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getVolume() const
{
    return m_Volume;
}

template <class T>
void ParcelTmpl<T>::setVolume(String value)
{
    m_Volume = value;
    m_bVolume_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_Volume() const
{
    return m_bVolume_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_Volume()
{
    m_bVolume_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getPclRef() const
{
    return m_PclRef;
}

template <class T>
void ParcelTmpl<T>::setPclRef(String value)
{
    m_PclRef = value;
    m_bPclRef_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_PclRef() const
{
    return m_bPclRef_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_PclRef()
{
    m_bPclRef_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getLotEntitlements() const
{
    return m_LotEntitlements;
}

template <class T>
void ParcelTmpl<T>::setLotEntitlements(String value)
{
    m_LotEntitlements = value;
    m_bLotEntitlements_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_LotEntitlements() const
{
    return m_bLotEntitlements_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_LotEntitlements()
{
    m_bLotEntitlements_valueSet = false;
}


template <class T>
String ParcelTmpl<T>::getLiabilityApportionment() const
{
    return m_LiabilityApportionment;
}

template <class T>
void ParcelTmpl<T>::setLiabilityApportionment(String value)
{
    m_LiabilityApportionment = value;
    m_bLiabilityApportionment_valueSet = true;
}

template <class T>
bool ParcelTmpl<T>::hasValue_LiabilityApportionment() const
{
    return m_bLiabilityApportionment_valueSet;
}

template <class T>
void ParcelTmpl<T>::resetValue_LiabilityApportionment()
{
    m_bLiabilityApportionment_valueSet = false;
}



template <class T>
void ParcelTmpl<T>::toXml (IStream& stream)
{
    static const wchar_t* kstrElementName = L"Parcel";
    stream.write(L"<");
    stream.write(kstrElementName);
    if (m_bName_valueSet)
    {
        stream.write(L" name=\"");
        StringObjectImpl::streamOut(m_Name, stream);
        stream.write(L"\"");
    }
    if (m_bOID_valueSet)
    {
        stream.write(L" oID=\"");
        StringObjectImpl::streamOut(m_OID, stream);
        stream.write(L"\"");
    }
    if (m_bArea_valueSet)
    {
        stream.write(L" area=\"");
        DoubleObjectImpl::streamOut(m_Area, stream);
        stream.write(L"\"");
    }
    if (m_bDesc_valueSet)
    {
        stream.write(L" desc=\"");
        StringObjectImpl::streamOut(m_Desc, stream);
        stream.write(L"\"");
    }
    if (m_bDirClosure_valueSet)
    {
        stream.write(L" dirClosure=\"");
        DoubleObjectImpl::streamOut(m_DirClosure, stream);
        stream.write(L"\"");
    }
    if (m_bDistClosure_valueSet)
    {
        stream.write(L" distClosure=\"");
        DoubleObjectImpl::streamOut(m_DistClosure, stream);
        stream.write(L"\"");
    }
    if (m_bOwner_valueSet)
    {
        stream.write(L" owner=\"");
        StringObjectImpl::streamOut(m_Owner, stream);
        stream.write(L"\"");
    }
    if (m_bParcelType_valueSet)
    {
        stream.write(L" parcelType=\"");
        StringObjectImpl::streamOut(m_ParcelType, stream);
        stream.write(L"\"");
    }
    if (m_bSetbackFront_valueSet)
    {
        stream.write(L" setbackFront=\"");
        DoubleObjectImpl::streamOut(m_SetbackFront, stream);
        stream.write(L"\"");
    }
    if (m_bSetbackRear_valueSet)
    {
        stream.write(L" setbackRear=\"");
        DoubleObjectImpl::streamOut(m_SetbackRear, stream);
        stream.write(L"\"");
    }
    if (m_bSetbackSide_valueSet)
    {
        stream.write(L" setbackSide=\"");
        DoubleObjectImpl::streamOut(m_SetbackSide, stream);
        stream.write(L"\"");
    }
    if (m_bState_valueSet)
    {
        stream.write(L" state=\"");
        EnumParcelStateTypeImpl::streamOut(m_State, stream);
        stream.write(L"\"");
    }
    if (m_bTaxId_valueSet)
    {
        stream.write(L" taxId=\"");
        StringObjectImpl::streamOut(m_TaxId, stream);
        stream.write(L"\"");
    }
    if (m_bClass_valueSet)
    {
        stream.write(L" class=\"");
        StringObjectImpl::streamOut(m_Class, stream);
        stream.write(L"\"");
    }
    if (m_bUseOfParcel_valueSet)
    {
        stream.write(L" useOfParcel=\"");
        StringObjectImpl::streamOut(m_UseOfParcel, stream);
        stream.write(L"\"");
    }
    if (m_bParcelFormat_valueSet)
    {
        stream.write(L" parcelFormat=\"");
        StringObjectImpl::streamOut(m_ParcelFormat, stream);
        stream.write(L"\"");
    }
    if (m_bBuildingNo_valueSet)
    {
        stream.write(L" buildingNo=\"");
        StringObjectImpl::streamOut(m_BuildingNo, stream);
        stream.write(L"\"");
    }
    if (m_bBuildingLevelNo_valueSet)
    {
        stream.write(L" buildingLevelNo=\"");
        StringObjectImpl::streamOut(m_BuildingLevelNo, stream);
        stream.write(L"\"");
    }
    if (m_bVolume_valueSet)
    {
        stream.write(L" volume=\"");
        StringObjectImpl::streamOut(m_Volume, stream);
        stream.write(L"\"");
    }
    if (m_bPclRef_valueSet)
    {
        stream.write(L" pclRef=\"");
        StringObjectImpl::streamOut(m_PclRef, stream);
        stream.write(L"\"");
    }
    if (m_bLotEntitlements_valueSet)
    {
        stream.write(L" lotEntitlements=\"");
        StringObjectImpl::streamOut(m_LotEntitlements, stream);
        stream.write(L"\"");
    }
    if (m_bLiabilityApportionment_valueSet)
    {
        stream.write(L" liabilityApportionment=\"");
        StringObjectImpl::streamOut(m_LiabilityApportionment, stream);
        stream.write(L"\"");
    }
    stream.write(L">");
    if (m_Center)
    {
    	m_Center->toXml(stream);
    }
    if (m_CoordGeom)
    {
    	m_CoordGeom->toXml(stream);
    }
    if (m_VolumeGeom)
    {
    	m_VolumeGeom->toXml(stream);
    }
    if (m_Parcels)
    {
    	m_Parcels->toXml(stream);
    }
    if (m_Title)
    {
    	m_Title->toXml(stream);
    }
    if (m_Exclusions)
    {
    	m_Exclusions->toXml(stream);
    }
    if (m_LocationAddress)
    {
    	m_LocationAddress->toXml(stream);
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
Object::ValidityEnum ParcelTmpl<T>::validate (IValidationEventSink* pEventSink) const
{
    Object::ValidityEnum returnCode = Object::kValid;
    returnCode = this->ObjectTmpl<T>::validate(pEventSink);
    if (m_Center)
    {
        if (m_Center->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_CoordGeom)
    {
        if (m_CoordGeom->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_VolumeGeom)
    {
        if (m_VolumeGeom->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Parcels)
    {
        if (m_Parcels->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Title)
    {
        if (m_Title->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Exclusions)
    {
        if (m_Exclusions->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_LocationAddress)
    {
        if (m_LocationAddress->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (m_Feature)
    {
        if (m_Feature->validate(pEventSink) != Object::kValid)
            returnCode = Object::kValidWithInvalidChildren;
    }
    if (!m_bName_valueSet)
    {
        pEventSink->onEvent(IValidationEventSink::EventCode::kRequiredValueNotSet, this, L"Name", L"Required value not set");
        returnCode = Object::kInvalid;
    }
    return returnCode;
}

}; // namespace : LX
