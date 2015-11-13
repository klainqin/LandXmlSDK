#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "InSpiral.h"
#include "Spiral.h"
#include "Surfaces.h"
#include "SurfaceCollection.h"
#include "SurfVolumesCollection.h"
#include "FeatureCollection.h"
#include "RunoffStaCollection.h"
#include "TurnLaneCollection.h"
#include "Curve.h"
#include "Start.h"
#include "Center.h"
#include "End.h"
#include "POI.h"

namespace LX
{

InSpiralNode::InSpiralNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<InSpiral*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InSpiralNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getSpiral())
        m_arrChildren.push_back(new SpiralNode(m_pLxObj->getSpiral()));
}

bool InSpiralNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    InSpiral* pObject = dynamic_cast<InSpiral*>(m_pObject);
    return bValueSet;
}

bool InSpiralNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    InSpiral* pObject = dynamic_cast<InSpiral*>(m_pObject);
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

String InSpiralNode::nodeName() const
{
    return L"InSpiral";
}

SurfacesNode::SurfacesNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Surfaces*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfacesNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new SurfaceCollectionNode(m_pLxObj->Surface()));
    m_arrChildren.push_back(new SurfVolumesCollectionNode(m_pLxObj->SurfVolumes()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool SurfacesNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Surfaces* pObject = dynamic_cast<Surfaces*>(m_pObject);
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
    return bValueSet;
}

bool SurfacesNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Surfaces* pObject = dynamic_cast<Surfaces*>(m_pObject);
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
    return bValueSet;
}

String SurfacesNode::nodeName() const
{
    return L"Surfaces";
}

RunoffStaCollectionNode::RunoffStaCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

RunoffStaCollectionNode::RunoffStaCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void RunoffStaCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<RunoffStaCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"RunoffStaCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    RunoffStaCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new RunoffStaNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String RunoffStaCollectionNode::nodeName() const
{
    return L"RunoffStaCollection";
}

ILxNode* RunoffStaCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
TurnLaneCollectionNode::TurnLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

TurnLaneCollectionNode::TurnLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void TurnLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<TurnLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"TurnLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    TurnLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new TurnLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String TurnLaneCollectionNode::nodeName() const
{
    return L"TurnLaneCollection";
}

ILxNode* TurnLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
CurveNode::CurveNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Curve*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CurveNode :: Invalid Object.");
    int nNumChildren = 22;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    if (m_pLxObj->getCenter())
        m_arrChildren.push_back(new CenterNode(m_pLxObj->getCenter()));
    if (m_pLxObj->getEnd())
        m_arrChildren.push_back(new EndNode(m_pLxObj->getEnd()));
    if (m_pLxObj->getPI())
        m_arrChildren.push_back(new POINode(m_pLxObj->getPI()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Rot", L"Rot"));
    m_arrChildren.push_back(new ValueNode(this, L"Chord", L"Chord"));
    m_arrChildren.push_back(new ValueNode(this, L"CrvType", L"CrvType"));
    m_arrChildren.push_back(new ValueNode(this, L"Delta", L"Delta"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"DirEnd", L"DirEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"DirStart", L"DirStart"));
    m_arrChildren.push_back(new ValueNode(this, L"External", L"External"));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"MidOrd", L"MidOrd"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Radius", L"Radius"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"Tangent", L"Tangent"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Note", L"Note"));
}

bool CurveNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Curve* pObject = dynamic_cast<Curve*>(m_pObject);
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
    if (strMemberName == L"CrvType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CrvType();
        }
        else
        {
            pObject->setCrvType(EnumCurveTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Delta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Delta();
        }
        else
        {
            pObject->setDelta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"External")
    {
        if (!pstrValue)
        {
            pObject->resetValue_External();
        }
        else
        {
            pObject->setExternal(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"MidOrd")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MidOrd();
        }
        else
        {
            pObject->setMidOrd(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Radius")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Radius();
        }
        else
        {
            pObject->setRadius(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Tangent")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Tangent();
        }
        else
        {
            pObject->setTangent(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool CurveNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Curve* pObject = dynamic_cast<Curve*>(m_pObject);
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
    else if (strMemberName == L"Rot")
    {
        if (pObject->hasValue_Rot())
        {
            strValue = (EnumClockwiseImpl(pObject->getRot())).toString();
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
    else if (strMemberName == L"CrvType")
    {
        if (pObject->hasValue_CrvType())
        {
            strValue = (EnumCurveTypeImpl(pObject->getCrvType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Delta")
    {
        if (pObject->hasValue_Delta())
        {
            strValue = (DoubleObjectImpl(pObject->getDelta())).toString();
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
    else if (strMemberName == L"External")
    {
        if (pObject->hasValue_External())
        {
            strValue = (DoubleObjectImpl(pObject->getExternal())).toString();
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
    else if (strMemberName == L"MidOrd")
    {
        if (pObject->hasValue_MidOrd())
        {
            strValue = (DoubleObjectImpl(pObject->getMidOrd())).toString();
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
    else if (strMemberName == L"Radius")
    {
        if (pObject->hasValue_Radius())
        {
            strValue = (DoubleObjectImpl(pObject->getRadius())).toString();
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
    else if (strMemberName == L"Tangent")
    {
        if (pObject->hasValue_Tangent())
        {
            strValue = (DoubleObjectImpl(pObject->getTangent())).toString();
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

String CurveNode::nodeName() const
{
    return L"Curve";
}

}; // namespace : LX
