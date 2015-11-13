#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Spiral.h"
#include "Start.h"
#include "POI.h"
#include "End.h"
#include "FeatureCollection.h"
#include "ElliPipe.h"
#include "SurfVolume.h"
#include "VolumeGeom.h"
#include "CoordGeomCollection.h"
#include "HeadOfPowerCollection.h"

namespace LX
{

SpiralNode::SpiralNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Spiral*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SpiralNode :: Invalid Object.");
    int nNumChildren = 23;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    if (m_pLxObj->getPI())
        m_arrChildren.push_back(new POINode(m_pLxObj->getPI()));
    if (m_pLxObj->getEnd())
        m_arrChildren.push_back(new EndNode(m_pLxObj->getEnd()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"RadiusEnd", L"RadiusEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"RadiusStart", L"RadiusStart"));
    m_arrChildren.push_back(new ValueNode(this, L"Rot", L"Rot"));
    m_arrChildren.push_back(new ValueNode(this, L"SpiType", L"SpiType"));
    m_arrChildren.push_back(new ValueNode(this, L"Chord", L"Chord"));
    m_arrChildren.push_back(new ValueNode(this, L"Constant", L"Constant"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"DirEnd", L"DirEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"DirStart", L"DirStart"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Theta", L"Theta"));
    m_arrChildren.push_back(new ValueNode(this, L"TotalY", L"TotalY"));
    m_arrChildren.push_back(new ValueNode(this, L"TotalX", L"TotalX"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"TanLong", L"TanLong"));
    m_arrChildren.push_back(new ValueNode(this, L"TanShort", L"TanShort"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
}

bool SpiralNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Spiral* pObject = dynamic_cast<Spiral*>(m_pObject);
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
    if (strMemberName == L"RadiusEnd")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RadiusEnd();
        }
        else
        {
            pObject->setRadiusEnd(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RadiusStart")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RadiusStart();
        }
        else
        {
            pObject->setRadiusStart(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Rot")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Rot();
        }
        else
        {
            pObject->setRot(EnumClockwiseImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SpiType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SpiType();
        }
        else
        {
            pObject->setSpiType(EnumSpiralTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Chord")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Chord();
        }
        else
        {
            pObject->setChord(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Constant")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Constant();
        }
        else
        {
            pObject->setConstant(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"DirEnd")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DirEnd();
        }
        else
        {
            pObject->setDirEnd(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DirStart")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DirStart();
        }
        else
        {
            pObject->setDirStart(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Theta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Theta();
        }
        else
        {
            pObject->setTheta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TotalY")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TotalY();
        }
        else
        {
            pObject->setTotalY(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TotalX")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TotalX();
        }
        else
        {
            pObject->setTotalX(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"TanLong")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TanLong();
        }
        else
        {
            pObject->setTanLong(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TanShort")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TanShort();
        }
        else
        {
            pObject->setTanShort(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool SpiralNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Spiral* pObject = dynamic_cast<Spiral*>(m_pObject);
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
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RadiusEnd")
    {
        if (pObject->hasValue_RadiusEnd())
        {
            strValue = (DoubleObjectImpl(pObject->getRadiusEnd())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RadiusStart")
    {
        if (pObject->hasValue_RadiusStart())
        {
            strValue = (DoubleObjectImpl(pObject->getRadiusStart())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Rot")
    {
        if (pObject->hasValue_Rot())
        {
            strValue = (EnumClockwiseImpl(pObject->getRot())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SpiType")
    {
        if (pObject->hasValue_SpiType())
        {
            strValue = (EnumSpiralTypeImpl(pObject->getSpiType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Chord")
    {
        if (pObject->hasValue_Chord())
        {
            strValue = (DoubleObjectImpl(pObject->getChord())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Constant")
    {
        if (pObject->hasValue_Constant())
        {
            strValue = (DoubleObjectImpl(pObject->getConstant())).toString();
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
    else if (strMemberName == L"DirEnd")
    {
        if (pObject->hasValue_DirEnd())
        {
            strValue = (DoubleObjectImpl(pObject->getDirEnd())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DirStart")
    {
        if (pObject->hasValue_DirStart())
        {
            strValue = (DoubleObjectImpl(pObject->getDirStart())).toString();
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
    else if (strMemberName == L"Theta")
    {
        if (pObject->hasValue_Theta())
        {
            strValue = (DoubleObjectImpl(pObject->getTheta())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TotalY")
    {
        if (pObject->hasValue_TotalY())
        {
            strValue = (DoubleObjectImpl(pObject->getTotalY())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TotalX")
    {
        if (pObject->hasValue_TotalX())
        {
            strValue = (DoubleObjectImpl(pObject->getTotalX())).toString();
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
    else if (strMemberName == L"TanLong")
    {
        if (pObject->hasValue_TanLong())
        {
            strValue = (DoubleObjectImpl(pObject->getTanLong())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TanShort")
    {
        if (pObject->hasValue_TanShort())
        {
            strValue = (DoubleObjectImpl(pObject->getTanShort())).toString();
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
    return bValueSet;
}

String SpiralNode::nodeName() const
{
    return L"Spiral";
}

ElliPipeNode::ElliPipeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ElliPipe*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ElliPipeNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Height", L"Height"));
    m_arrChildren.push_back(new ValueNode(this, L"Span", L"Span"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"HazenWilliams", L"HazenWilliams"));
    m_arrChildren.push_back(new ValueNode(this, L"Mannings", L"Mannings"));
    m_arrChildren.push_back(new ValueNode(this, L"Material", L"Material"));
    m_arrChildren.push_back(new ValueNode(this, L"Thickness", L"Thickness"));
}

bool ElliPipeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ElliPipe* pObject = dynamic_cast<ElliPipe*>(m_pObject);
    if (strMemberName == L"Height")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Height();
        }
        else
        {
            pObject->setHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Span")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Span();
        }
        else
        {
            pObject->setSpan(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"HazenWilliams")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HazenWilliams();
        }
        else
        {
            pObject->setHazenWilliams(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Mannings")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Mannings();
        }
        else
        {
            pObject->setMannings(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Material")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Material();
        }
        else
        {
            pObject->setMaterial(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Thickness")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Thickness();
        }
        else
        {
            pObject->setThickness(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ElliPipeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ElliPipe* pObject = dynamic_cast<ElliPipe*>(m_pObject);
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
    else if (strMemberName == L"Height")
    {
        if (pObject->hasValue_Height())
        {
            strValue = (DoubleObjectImpl(pObject->getHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Span")
    {
        if (pObject->hasValue_Span())
        {
            strValue = (DoubleObjectImpl(pObject->getSpan())).toString();
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
    else if (strMemberName == L"HazenWilliams")
    {
        if (pObject->hasValue_HazenWilliams())
        {
            strValue = (DoubleObjectImpl(pObject->getHazenWilliams())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Mannings")
    {
        if (pObject->hasValue_Mannings())
        {
            strValue = (DoubleObjectImpl(pObject->getMannings())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Material")
    {
        if (pObject->hasValue_Material())
        {
            strValue = (StringObjectImpl(pObject->getMaterial())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Thickness")
    {
        if (pObject->hasValue_Thickness())
        {
            strValue = (DoubleObjectImpl(pObject->getThickness())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ElliPipeNode::nodeName() const
{
    return L"ElliPipe";
}

SurfVolumeNode::SurfVolumeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurfVolume*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfVolumeNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"SurfBase", L"SurfBase"));
    m_arrChildren.push_back(new ValueNode(this, L"SurfCompare", L"SurfCompare"));
    m_arrChildren.push_back(new ValueNode(this, L"VolCut", L"VolCut"));
    m_arrChildren.push_back(new ValueNode(this, L"VolFill", L"VolFill"));
    m_arrChildren.push_back(new ValueNode(this, L"VolTotal", L"VolTotal"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
}

bool SurfVolumeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    SurfVolume* pObject = dynamic_cast<SurfVolume*>(m_pObject);
    if (strMemberName == L"SurfBase")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurfBase();
        }
        else
        {
            pObject->setSurfBase(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SurfCompare")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurfCompare();
        }
        else
        {
            pObject->setSurfCompare(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VolCut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VolCut();
        }
        else
        {
            pObject->setVolCut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VolFill")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VolFill();
        }
        else
        {
            pObject->setVolFill(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VolTotal")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VolTotal();
        }
        else
        {
            pObject->setVolTotal(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    return bValueSet;
}

bool SurfVolumeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    SurfVolume* pObject = dynamic_cast<SurfVolume*>(m_pObject);
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
    else if (strMemberName == L"SurfBase")
    {
        if (pObject->hasValue_SurfBase())
        {
            strValue = (StringObjectImpl(pObject->getSurfBase())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SurfCompare")
    {
        if (pObject->hasValue_SurfCompare())
        {
            strValue = (StringObjectImpl(pObject->getSurfCompare())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolCut")
    {
        if (pObject->hasValue_VolCut())
        {
            strValue = (DoubleObjectImpl(pObject->getVolCut())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolFill")
    {
        if (pObject->hasValue_VolFill())
        {
            strValue = (DoubleObjectImpl(pObject->getVolFill())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolTotal")
    {
        if (pObject->hasValue_VolTotal())
        {
            strValue = (DoubleObjectImpl(pObject->getVolTotal())).toString();
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
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String SurfVolumeNode::nodeName() const
{
    return L"SurfVolume";
}

VolumeGeomNode::VolumeGeomNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<VolumeGeom*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"VolumeGeomNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new CoordGeomCollectionNode(m_pLxObj->CoordGeom()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
}

bool VolumeGeomNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    VolumeGeom* pObject = dynamic_cast<VolumeGeom*>(m_pObject);
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
    return bValueSet;
}

bool VolumeGeomNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    VolumeGeom* pObject = dynamic_cast<VolumeGeom*>(m_pObject);
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
    else if (strMemberName == L"Name")
    {
        if (pObject->hasValue_Name())
        {
            strValue = (StringObjectImpl(pObject->getName())).toString();
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
    return bValueSet;
}

String VolumeGeomNode::nodeName() const
{
    return L"VolumeGeom";
}

HeadOfPowerCollectionNode::HeadOfPowerCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

HeadOfPowerCollectionNode::HeadOfPowerCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void HeadOfPowerCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<HeadOfPowerCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"HeadOfPowerCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    HeadOfPowerCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new HeadOfPowerNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String HeadOfPowerCollectionNode::nodeName() const
{
    return L"HeadOfPowerCollection";
}

ILxNode* HeadOfPowerCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        HeadOfPowerCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
        if (pFoundIter)
        {
            Object* pFoundObj = pFoundIter->current();
            pFoundIter->release();
	         // Find the object in the child array
            for (unsigned int i = 0; i < m_arrChildren.size(); i++)
		     {
                if (pFoundObj == m_arrChildren[i]->getObject())
                {
                    pFoundNode = m_arrChildren[i];
			         break;
                }
            }
        }
    }
    return pFoundNode;
}
}; // namespace : LX
