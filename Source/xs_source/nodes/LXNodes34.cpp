#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Curve1.h"
#include "Curve.h"
#include "Parcel.h"
#include "Center.h"
#include "CoordGeom.h"
#include "VolumeGeom.h"
#include "Parcels.h"
#include "TitleCollection.h"
#include "ExclusionsCollection.h"
#include "LocationAddressCollection.h"
#include "FeatureCollection.h"
#include "Line.h"
#include "Start.h"
#include "End.h"
#include "Alignment.h"
#include "AlignPIs.h"
#include "Cant.h"
#include "CrossSectsCollection.h"
#include "StaEquationCollection.h"
#include "ProfileCollection.h"
#include "SuperelevationCollection.h"
#include "Feature.h"
#include "PropertyCollection.h"
#include "DocFileRefCollection.h"

namespace LX
{

Curve1Node::Curve1Node (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Curve1*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"Curve1Node :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCurve())
        m_arrChildren.push_back(new CurveNode(m_pLxObj->getCurve()));
}

bool Curve1Node::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Curve1* pObject = dynamic_cast<Curve1*>(m_pObject);
    return bValueSet;
}

bool Curve1Node::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Curve1* pObject = dynamic_cast<Curve1*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    return bValueSet;
}

String Curve1Node::nodeName() const
{
    return L"Curve1";
}

ParcelNode::ParcelNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Parcel*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ParcelNode :: Invalid Object.");
    int nNumChildren = 30;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCenter())
        m_arrChildren.push_back(new CenterNode(m_pLxObj->getCenter()));
    if (m_pLxObj->getCoordGeom())
        m_arrChildren.push_back(new CoordGeomNode(m_pLxObj->getCoordGeom()));
    if (m_pLxObj->getVolumeGeom())
        m_arrChildren.push_back(new VolumeGeomNode(m_pLxObj->getVolumeGeom()));
    if (m_pLxObj->getParcels())
        m_arrChildren.push_back(new ParcelsNode(m_pLxObj->getParcels()));
    m_arrChildren.push_back(new TitleCollectionNode(m_pLxObj->Title()));
    m_arrChildren.push_back(new ExclusionsCollectionNode(m_pLxObj->Exclusions()));
    m_arrChildren.push_back(new LocationAddressCollectionNode(m_pLxObj->LocationAddress()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Area", L"Area"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"DirClosure", L"DirClosure"));
    m_arrChildren.push_back(new ValueNode(this, L"DistClosure", L"DistClosure"));
    m_arrChildren.push_back(new ValueNode(this, L"Owner", L"Owner"));
    m_arrChildren.push_back(new ValueNode(this, L"ParcelType", L"ParcelType"));
    m_arrChildren.push_back(new ValueNode(this, L"SetbackFront", L"SetbackFront"));
    m_arrChildren.push_back(new ValueNode(this, L"SetbackRear", L"SetbackRear"));
    m_arrChildren.push_back(new ValueNode(this, L"SetbackSide", L"SetbackSide"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"TaxId", L"TaxId"));
    m_arrChildren.push_back(new ValueNode(this, L"Class", L"Class"));
    m_arrChildren.push_back(new ValueNode(this, L"UseOfParcel", L"UseOfParcel"));
    m_arrChildren.push_back(new ValueNode(this, L"ParcelFormat", L"ParcelFormat"));
    m_arrChildren.push_back(new ValueNode(this, L"BuildingNo", L"BuildingNo"));
    m_arrChildren.push_back(new ValueNode(this, L"BuildingLevelNo", L"BuildingLevelNo"));
    m_arrChildren.push_back(new ValueNode(this, L"Volume", L"Volume"));
    m_arrChildren.push_back(new ValueNode(this, L"PclRef", L"PclRef"));
    m_arrChildren.push_back(new ValueNode(this, L"LotEntitlements", L"LotEntitlements"));
    m_arrChildren.push_back(new ValueNode(this, L"LiabilityApportionment", L"LiabilityApportionment"));
}

bool ParcelNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Parcel* pObject = dynamic_cast<Parcel*>(m_pObject);
    if (strMemberName == L"Name")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Name();
        }
        else
        {
            pObject->setName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OID();
        }
        else
        {
            pObject->setOID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Area")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Area();
        }
        else
        {
            pObject->setArea(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Desc")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Desc();
        }
        else
        {
            pObject->setDesc(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DirClosure")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DirClosure();
        }
        else
        {
            pObject->setDirClosure(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DistClosure")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DistClosure();
        }
        else
        {
            pObject->setDistClosure(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Owner")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Owner();
        }
        else
        {
            pObject->setOwner(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ParcelType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ParcelType();
        }
        else
        {
            pObject->setParcelType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetbackFront")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetbackFront();
        }
        else
        {
            pObject->setSetbackFront(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetbackRear")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetbackRear();
        }
        else
        {
            pObject->setSetbackRear(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetbackSide")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetbackSide();
        }
        else
        {
            pObject->setSetbackSide(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(EnumParcelStateTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TaxId")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TaxId();
        }
        else
        {
            pObject->setTaxId(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Class")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Class();
        }
        else
        {
            pObject->setClass(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"UseOfParcel")
    {
        if (!pstrValue)
        {
            pObject->resetValue_UseOfParcel();
        }
        else
        {
            pObject->setUseOfParcel(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ParcelFormat")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ParcelFormat();
        }
        else
        {
            pObject->setParcelFormat(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"BuildingNo")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BuildingNo();
        }
        else
        {
            pObject->setBuildingNo(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"BuildingLevelNo")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BuildingLevelNo();
        }
        else
        {
            pObject->setBuildingLevelNo(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Volume")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Volume();
        }
        else
        {
            pObject->setVolume(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PclRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PclRef();
        }
        else
        {
            pObject->setPclRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LotEntitlements")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LotEntitlements();
        }
        else
        {
            pObject->setLotEntitlements(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LiabilityApportionment")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LiabilityApportionment();
        }
        else
        {
            pObject->setLiabilityApportionment(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ParcelNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Parcel* pObject = dynamic_cast<Parcel*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Area")
    {
        if (pObject->hasValue_Area())
        {
            strValue = (DoubleObjectImpl(pObject->getArea())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DirClosure")
    {
        if (pObject->hasValue_DirClosure())
        {
            strValue = (DoubleObjectImpl(pObject->getDirClosure())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DistClosure")
    {
        if (pObject->hasValue_DistClosure())
        {
            strValue = (DoubleObjectImpl(pObject->getDistClosure())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Owner")
    {
        if (pObject->hasValue_Owner())
        {
            strValue = (StringObjectImpl(pObject->getOwner())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ParcelType")
    {
        if (pObject->hasValue_ParcelType())
        {
            strValue = (StringObjectImpl(pObject->getParcelType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetbackFront")
    {
        if (pObject->hasValue_SetbackFront())
        {
            strValue = (DoubleObjectImpl(pObject->getSetbackFront())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetbackRear")
    {
        if (pObject->hasValue_SetbackRear())
        {
            strValue = (DoubleObjectImpl(pObject->getSetbackRear())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetbackSide")
    {
        if (pObject->hasValue_SetbackSide())
        {
            strValue = (DoubleObjectImpl(pObject->getSetbackSide())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumParcelStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TaxId")
    {
        if (pObject->hasValue_TaxId())
        {
            strValue = (StringObjectImpl(pObject->getTaxId())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Class")
    {
        if (pObject->hasValue_Class())
        {
            strValue = (StringObjectImpl(pObject->getClass())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"UseOfParcel")
    {
        if (pObject->hasValue_UseOfParcel())
        {
            strValue = (StringObjectImpl(pObject->getUseOfParcel())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ParcelFormat")
    {
        if (pObject->hasValue_ParcelFormat())
        {
            strValue = (StringObjectImpl(pObject->getParcelFormat())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"BuildingNo")
    {
        if (pObject->hasValue_BuildingNo())
        {
            strValue = (StringObjectImpl(pObject->getBuildingNo())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"BuildingLevelNo")
    {
        if (pObject->hasValue_BuildingLevelNo())
        {
            strValue = (StringObjectImpl(pObject->getBuildingLevelNo())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Volume")
    {
        if (pObject->hasValue_Volume())
        {
            strValue = (StringObjectImpl(pObject->getVolume())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PclRef")
    {
        if (pObject->hasValue_PclRef())
        {
            strValue = (StringObjectImpl(pObject->getPclRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LotEntitlements")
    {
        if (pObject->hasValue_LotEntitlements())
        {
            strValue = (StringObjectImpl(pObject->getLotEntitlements())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LiabilityApportionment")
    {
        if (pObject->hasValue_LiabilityApportionment())
        {
            strValue = (StringObjectImpl(pObject->getLiabilityApportionment())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ParcelNode::nodeName() const
{
    return L"Parcel";
}

LineNode::LineNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Line*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LineNode :: Invalid Object.");
    int nNumChildren = 11;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    if (m_pLxObj->getEnd())
        m_arrChildren.push_back(new EndNode(m_pLxObj->getEnd()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Dir", L"Dir"));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Note", L"Note"));
}

bool LineNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Line* pObject = dynamic_cast<Line*>(m_pObject);
    if (strMemberName == L"Desc")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Desc();
        }
        else
        {
            pObject->setDesc(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Dir")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Dir();
        }
        else
        {
            pObject->setDir(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Length")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Length();
        }
        else
        {
            pObject->setLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Name")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Name();
        }
        else
        {
            pObject->setName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StaStart")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaStart();
        }
        else
        {
            pObject->setStaStart(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(EnumStateTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OID();
        }
        else
        {
            pObject->setOID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Note")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Note();
        }
        else
        {
            pObject->setNote(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool LineNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Line* pObject = dynamic_cast<Line*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Dir")
    {
        if (pObject->hasValue_Dir())
        {
            strValue = (DoubleObjectImpl(pObject->getDir())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaStart")
    {
        if (pObject->hasValue_StaStart())
        {
            strValue = (DoubleObjectImpl(pObject->getStaStart())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Note")
    {
        if (pObject->hasValue_Note())
        {
            strValue = (StringObjectImpl(pObject->getNote())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String LineNode::nodeName() const
{
    return L"Line";
}

AlignmentNode::AlignmentNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Alignment*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignmentNode :: Invalid Object.");
    int nNumChildren = 15;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCoordGeom())
        m_arrChildren.push_back(new CoordGeomNode(m_pLxObj->getCoordGeom()));
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    if (m_pLxObj->getAlignPIs())
        m_arrChildren.push_back(new AlignPIsNode(m_pLxObj->getAlignPIs()));
    if (m_pLxObj->getCant())
        m_arrChildren.push_back(new CantNode(m_pLxObj->getCant()));
    m_arrChildren.push_back(new CrossSectsCollectionNode(m_pLxObj->CrossSects()));
    m_arrChildren.push_back(new StaEquationCollectionNode(m_pLxObj->StaEquation()));
    m_arrChildren.push_back(new ProfileCollectionNode(m_pLxObj->Profile()));
    m_arrChildren.push_back(new SuperelevationCollectionNode(m_pLxObj->Superelevation()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool AlignmentNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Alignment* pObject = dynamic_cast<Alignment*>(m_pObject);
    if (strMemberName == L"Name")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Name();
        }
        else
        {
            pObject->setName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Length")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Length();
        }
        else
        {
            pObject->setLength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StaStart")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaStart();
        }
        else
        {
            pObject->setStaStart(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Desc")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Desc();
        }
        else
        {
            pObject->setDesc(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OID();
        }
        else
        {
            pObject->setOID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"State")
    {
        if (!pstrValue)
        {
            pObject->resetValue_State();
        }
        else
        {
            pObject->setState(EnumStateTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool AlignmentNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Alignment* pObject = dynamic_cast<Alignment*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaStart")
    {
        if (pObject->hasValue_StaStart())
        {
            strValue = (DoubleObjectImpl(pObject->getStaStart())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OID")
    {
        if (pObject->hasValue_OID())
        {
            strValue = (StringObjectImpl(pObject->getOID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String AlignmentNode::nodeName() const
{
    return L"Alignment";
}

FeatureNode::FeatureNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Feature*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FeatureNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new PropertyCollectionNode(m_pLxObj->Property()));
    m_arrChildren.push_back(new DocFileRefCollectionNode(m_pLxObj->DocFileRef()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Code", L"Code"));
    m_arrChildren.push_back(new ValueNode(this, L"Source", L"Source"));
}

bool FeatureNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Feature* pObject = dynamic_cast<Feature*>(m_pObject);
    if (strMemberName == L"Name")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Name();
        }
        else
        {
            pObject->setName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Code")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Code();
        }
        else
        {
            pObject->setCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Source")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Source();
        }
        else
        {
            pObject->setSource(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool FeatureNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Feature* pObject = dynamic_cast<Feature*>(m_pObject);
    if (strMemberName == L"value")
    {
        ValueObject* pValueObj = dynamic_cast<ValueObject*>(m_pObject);
        if (pValueObj)
        {
            if (!pValueObj->isNothing())
            {
                strValue = pValueObj->toString();
                bValueSet = true;
            }
        }
    }
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Code")
    {
        if (pObject->hasValue_Code())
        {
            strValue = (StringObjectImpl(pObject->getCode())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Source")
    {
        if (pObject->hasValue_Source())
        {
            strValue = (StringObjectImpl(pObject->getSource())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String FeatureNode::nodeName() const
{
    return L"Feature";
}

}; // namespace : LX
