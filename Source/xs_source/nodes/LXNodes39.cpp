#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "SpeedsCollection.h"
#include "InvertCollection.h"
#include "CrossSect.h"
#include "CrossSectSurfCollection.h"
#include "DesignCrossSectSurfCollection.h"
#include "FeatureCollection.h"
#include "StartofRunoutSta.h"
#include "Outlet.h"

namespace LX
{

SpeedsCollectionNode::SpeedsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SpeedsCollectionNode::SpeedsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SpeedsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SpeedsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SpeedsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SpeedsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SpeedsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SpeedsCollectionNode::nodeName() const
{
    return L"SpeedsCollection";
}

ILxNode* SpeedsCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
InvertCollectionNode::InvertCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

InvertCollectionNode::InvertCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void InvertCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<InvertCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InvertCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    InvertCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new InvertNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String InvertCollectionNode::nodeName() const
{
    return L"InvertCollection";
}

ILxNode* InvertCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
CrossSectNode::CrossSectNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CrossSect*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CrossSectNode :: Invalid Object.");
    int nNumChildren = 14;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new CrossSectSurfCollectionNode(m_pLxObj->CrossSectSurf()));
    m_arrChildren.push_back(new DesignCrossSectSurfCollectionNode(m_pLxObj->DesignCrossSectSurf()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Sta", L"Sta"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"AngleSkew", L"AngleSkew"));
    m_arrChildren.push_back(new ValueNode(this, L"AreaCut", L"AreaCut"));
    m_arrChildren.push_back(new ValueNode(this, L"AreaFill", L"AreaFill"));
    m_arrChildren.push_back(new ValueNode(this, L"CentroidCut", L"CentroidCut"));
    m_arrChildren.push_back(new ValueNode(this, L"CentroidFill", L"CentroidFill"));
    m_arrChildren.push_back(new ValueNode(this, L"SectType", L"SectType"));
    m_arrChildren.push_back(new ValueNode(this, L"VolumeCut", L"VolumeCut"));
    m_arrChildren.push_back(new ValueNode(this, L"VolumeFill", L"VolumeFill"));
}

bool CrossSectNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CrossSect* pObject = dynamic_cast<CrossSect*>(m_pObject);
    if (strMemberName == L"Sta")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Sta();
        }
        else
        {
            pObject->setSta(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"AngleSkew")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AngleSkew();
        }
        else
        {
            pObject->setAngleSkew(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AreaCut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AreaCut();
        }
        else
        {
            pObject->setAreaCut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AreaFill")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AreaFill();
        }
        else
        {
            pObject->setAreaFill(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CentroidCut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CentroidCut();
        }
        else
        {
            pObject->setCentroidCut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CentroidFill")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CentroidFill();
        }
        else
        {
            pObject->setCentroidFill(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SectType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SectType();
        }
        else
        {
            pObject->setSectType(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VolumeCut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VolumeCut();
        }
        else
        {
            pObject->setVolumeCut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VolumeFill")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VolumeFill();
        }
        else
        {
            pObject->setVolumeFill(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CrossSectNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CrossSect* pObject = dynamic_cast<CrossSect*>(m_pObject);
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
    else if (strMemberName == L"Sta")
    {
        if (pObject->hasValue_Sta())
        {
            strValue = (DoubleObjectImpl(pObject->getSta())).toString();
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AngleSkew")
    {
        if (pObject->hasValue_AngleSkew())
        {
            strValue = (DoubleObjectImpl(pObject->getAngleSkew())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AreaCut")
    {
        if (pObject->hasValue_AreaCut())
        {
            strValue = (DoubleObjectImpl(pObject->getAreaCut())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AreaFill")
    {
        if (pObject->hasValue_AreaFill())
        {
            strValue = (DoubleObjectImpl(pObject->getAreaFill())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CentroidCut")
    {
        if (pObject->hasValue_CentroidCut())
        {
            strValue = (DoubleObjectImpl(pObject->getCentroidCut())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CentroidFill")
    {
        if (pObject->hasValue_CentroidFill())
        {
            strValue = (DoubleObjectImpl(pObject->getCentroidFill())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SectType")
    {
        if (pObject->hasValue_SectType())
        {
            strValue = (StringObjectImpl(pObject->getSectType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolumeCut")
    {
        if (pObject->hasValue_VolumeCut())
        {
            strValue = (DoubleObjectImpl(pObject->getVolumeCut())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VolumeFill")
    {
        if (pObject->hasValue_VolumeFill())
        {
            strValue = (DoubleObjectImpl(pObject->getVolumeFill())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CrossSectNode::nodeName() const
{
    return L"CrossSect";
}

StartofRunoutStaNode::StartofRunoutStaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<StartofRunoutSta*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StartofRunoutStaNode :: Invalid Object.");
    DoubleObject* pValObj = dynamic_cast<DoubleObject*>(m_pLxObj);
    int nNumChildren = 0;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
}

bool StartofRunoutStaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    StartofRunoutSta* pObject = dynamic_cast<StartofRunoutSta*>(m_pObject);
    return bValueSet;
}

bool StartofRunoutStaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    StartofRunoutSta* pObject = dynamic_cast<StartofRunoutSta*>(m_pObject);
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

String StartofRunoutStaNode::nodeName() const
{
    return L"StartofRunoutSta";
}

OutletNode::OutletNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Outlet*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OutletNode :: Invalid Object.");
    DoubleCollection* pValObj = dynamic_cast<DoubleCollection*>(m_pLxObj);
    int nNumChildren = 11;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Code", L"Code"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"PntRef", L"PntRef"));
    m_arrChildren.push_back(new ValueNode(this, L"FeatureRef", L"FeatureRef"));
    m_arrChildren.push_back(new ValueNode(this, L"PointGeometry", L"PointGeometry"));
    m_arrChildren.push_back(new ValueNode(this, L"DTMAttribute", L"DTMAttribute"));
    m_arrChildren.push_back(new ValueNode(this, L"TimeStamp", L"TimeStamp"));
    m_arrChildren.push_back(new ValueNode(this, L"Role", L"Role"));
    m_arrChildren.push_back(new ValueNode(this, L"RefWS", L"RefWS"));
}

bool OutletNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Outlet* pObject = dynamic_cast<Outlet*>(m_pObject);
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
    if (strMemberName == L"PntRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PntRef();
        }
        else
        {
            pObject->setPntRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FeatureRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FeatureRef();
        }
        else
        {
            pObject->setFeatureRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PointGeometry")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PointGeometry();
        }
        else
        {
            pObject->setPointGeometry(EnumPointGeometryTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DTMAttribute")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DTMAttribute();
        }
        else
        {
            pObject->setDTMAttribute(EnumDTMAttributeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TimeStamp")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TimeStamp();
        }
        else
        {
            pObject->setTimeStamp(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Role")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Role();
        }
        else
        {
            pObject->setRole(EnumSurveyRoleTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RefWS")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RefWS();
        }
        else
        {
            pObject->setRefWS(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool OutletNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Outlet* pObject = dynamic_cast<Outlet*>(m_pObject);
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
    else if (strMemberName == L"Desc")
    {
        if (pObject->hasValue_Desc())
        {
            strValue = (StringObjectImpl(pObject->getDesc())).toString();
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
    else if (strMemberName == L"State")
    {
        if (pObject->hasValue_State())
        {
            strValue = (EnumStateTypeImpl(pObject->getState())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PntRef")
    {
        if (pObject->hasValue_PntRef())
        {
            strValue = (StringObjectImpl(pObject->getPntRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FeatureRef")
    {
        if (pObject->hasValue_FeatureRef())
        {
            strValue = (StringObjectImpl(pObject->getFeatureRef())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PointGeometry")
    {
        if (pObject->hasValue_PointGeometry())
        {
            strValue = (EnumPointGeometryTypeImpl(pObject->getPointGeometry())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DTMAttribute")
    {
        if (pObject->hasValue_DTMAttribute())
        {
            strValue = (EnumDTMAttributeTypeImpl(pObject->getDTMAttribute())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TimeStamp")
    {
        if (pObject->hasValue_TimeStamp())
        {
            strValue = (StringObjectImpl(pObject->getTimeStamp())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Role")
    {
        if (pObject->hasValue_Role())
        {
            strValue = (EnumSurveyRoleTypeImpl(pObject->getRole())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RefWS")
    {
        if (pObject->hasValue_RefWS())
        {
            strValue = (StringObjectImpl(pObject->getRefWS())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String OutletNode::nodeName() const
{
    return L"Outlet";
}

}; // namespace : LX
