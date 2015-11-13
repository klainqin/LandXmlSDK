#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "DitchCollection.h"
#include "PassingLaneCollection.h"
#include "Pipe.h"
#include "CircPipe.h"
#include "EggPipe.h"
#include "ElliPipe.h"
#include "RectPipe.h"
#include "Channel.h"
#include "PipeFlow.h"
#include "Center.h"
#include "FeatureCollection.h"
#include "AdministrativeArea.h"
#include "ClimbLane.h"

namespace LX
{

DitchCollectionNode::DitchCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

DitchCollectionNode::DitchCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void DitchCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DitchCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DitchCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    DitchCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new DitchNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String DitchCollectionNode::nodeName() const
{
    return L"DitchCollection";
}

ILxNode* DitchCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
PassingLaneCollectionNode::PassingLaneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PassingLaneCollectionNode::PassingLaneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PassingLaneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PassingLaneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PassingLaneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PassingLaneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PassingLaneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PassingLaneCollectionNode::nodeName() const
{
    return L"PassingLaneCollection";
}

ILxNode* PassingLaneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
PipeNode::PipeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Pipe*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeNode :: Invalid Object.");
    int nNumChildren = 12;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (dynamic_cast<CircPipe*>(m_pLxObj->getPipeGeom()))
        if (m_pLxObj->getPipeGeom())
            m_arrChildren.push_back(new CircPipeNode(m_pLxObj->getPipeGeom()));
    if (dynamic_cast<EggPipe*>(m_pLxObj->getPipeGeom()))
        if (m_pLxObj->getPipeGeom())
            m_arrChildren.push_back(new EggPipeNode(m_pLxObj->getPipeGeom()));
    if (dynamic_cast<ElliPipe*>(m_pLxObj->getPipeGeom()))
        if (m_pLxObj->getPipeGeom())
            m_arrChildren.push_back(new ElliPipeNode(m_pLxObj->getPipeGeom()));
    if (dynamic_cast<RectPipe*>(m_pLxObj->getPipeGeom()))
        if (m_pLxObj->getPipeGeom())
            m_arrChildren.push_back(new RectPipeNode(m_pLxObj->getPipeGeom()));
    if (dynamic_cast<Channel*>(m_pLxObj->getPipeGeom()))
        if (m_pLxObj->getPipeGeom())
            m_arrChildren.push_back(new ChannelNode(m_pLxObj->getPipeGeom()));
    if (m_pLxObj->getPipeFlow())
        m_arrChildren.push_back(new PipeFlowNode(m_pLxObj->getPipeFlow()));
    if (m_pLxObj->getCenter())
        m_arrChildren.push_back(new CenterNode(m_pLxObj->getCenter()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"RefEnd", L"RefEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"RefStart", L"RefStart"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Length", L"Length"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"Slope", L"Slope"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool PipeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Pipe* pObject = dynamic_cast<Pipe*>(m_pObject);
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
    if (strMemberName == L"RefEnd")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RefEnd();
        }
        else
        {
            pObject->setRefEnd(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RefStart")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RefStart();
        }
        else
        {
            pObject->setRefStart(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"Slope")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Slope();
        }
        else
        {
            pObject->setSlope(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool PipeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Pipe* pObject = dynamic_cast<Pipe*>(m_pObject);
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
    else if (strMemberName == L"RefEnd")
    {
        if (pObject->hasValue_RefEnd())
        {
            strValue = (StringObjectImpl(pObject->getRefEnd())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RefStart")
    {
        if (pObject->hasValue_RefStart())
        {
            strValue = (StringObjectImpl(pObject->getRefStart())).toString();
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
    else if (strMemberName == L"Length")
    {
        if (pObject->hasValue_Length())
        {
            strValue = (DoubleObjectImpl(pObject->getLength())).toString();
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
    else if (strMemberName == L"Slope")
    {
        if (pObject->hasValue_Slope())
        {
            strValue = (DoubleObjectImpl(pObject->getSlope())).toString();
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

String PipeNode::nodeName() const
{
    return L"Pipe";
}

AdministrativeAreaNode::AdministrativeAreaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AdministrativeArea*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AdministrativeAreaNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"AdminAreaType", L"AdminAreaType"));
    m_arrChildren.push_back(new ValueNode(this, L"AdminAreaName", L"AdminAreaName"));
    m_arrChildren.push_back(new ValueNode(this, L"AdminAreaCode", L"AdminAreaCode"));
    m_arrChildren.push_back(new ValueNode(this, L"PclRef", L"PclRef"));
}

bool AdministrativeAreaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    AdministrativeArea* pObject = dynamic_cast<AdministrativeArea*>(m_pObject);
    if (strMemberName == L"AdminAreaType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdminAreaType();
        }
        else
        {
            pObject->setAdminAreaType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdminAreaName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdminAreaName();
        }
        else
        {
            pObject->setAdminAreaName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AdminAreaCode")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AdminAreaCode();
        }
        else
        {
            pObject->setAdminAreaCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PclRef")
    {
        if (!pstrValue)
        {
            pObject->setPclRef(NULL);
        }
        else
        {
            pObject->setPclRef(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool AdministrativeAreaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    AdministrativeArea* pObject = dynamic_cast<AdministrativeArea*>(m_pObject);
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
    else if (strMemberName == L"AdminAreaType")
    {
        if (pObject->hasValue_AdminAreaType())
        {
            strValue = (StringObjectImpl(pObject->getAdminAreaType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdminAreaName")
    {
        if (pObject->hasValue_AdminAreaName())
        {
            strValue = (StringObjectImpl(pObject->getAdminAreaName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AdminAreaCode")
    {
        if (pObject->hasValue_AdminAreaCode())
        {
            strValue = (StringObjectImpl(pObject->getAdminAreaCode())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PclRef")
    {
        if (pObject->getPclRef())
        {
            strValue = pObject->getPclRef()->toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String AdministrativeAreaNode::nodeName() const
{
    return L"AdministrativeArea";
}

ClimbLaneNode::ClimbLaneNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ClimbLane*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ClimbLaneNode :: Invalid Object.");
    int nNumChildren = 6;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"BeginFullWidthSta", L"BeginFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"EndFullWidthSta", L"EndFullWidthSta"));
    m_arrChildren.push_back(new ValueNode(this, L"Width", L"Width"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
}

bool ClimbLaneNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ClimbLane* pObject = dynamic_cast<ClimbLane*>(m_pObject);
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
    if (strMemberName == L"StaEnd")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StaEnd();
        }
        else
        {
            pObject->setStaEnd(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"BeginFullWidthSta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_BeginFullWidthSta();
        }
        else
        {
            pObject->setBeginFullWidthSta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndFullWidthSta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndFullWidthSta();
        }
        else
        {
            pObject->setEndFullWidthSta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Width")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Width();
        }
        else
        {
            pObject->setWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SideofRoad")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SideofRoad();
        }
        else
        {
            pObject->setSideofRoad(EnumSideofRoadTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ClimbLaneNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ClimbLane* pObject = dynamic_cast<ClimbLane*>(m_pObject);
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
    else if (strMemberName == L"StaStart")
    {
        if (pObject->hasValue_StaStart())
        {
            strValue = (DoubleObjectImpl(pObject->getStaStart())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StaEnd")
    {
        if (pObject->hasValue_StaEnd())
        {
            strValue = (DoubleObjectImpl(pObject->getStaEnd())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"BeginFullWidthSta")
    {
        if (pObject->hasValue_BeginFullWidthSta())
        {
            strValue = (DoubleObjectImpl(pObject->getBeginFullWidthSta())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndFullWidthSta")
    {
        if (pObject->hasValue_EndFullWidthSta())
        {
            strValue = (DoubleObjectImpl(pObject->getEndFullWidthSta())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Width")
    {
        if (pObject->hasValue_Width())
        {
            strValue = (DoubleObjectImpl(pObject->getWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SideofRoad")
    {
        if (pObject->hasValue_SideofRoad())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSideofRoad())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ClimbLaneNode::nodeName() const
{
    return L"ClimbLane";
}

}; // namespace : LX
