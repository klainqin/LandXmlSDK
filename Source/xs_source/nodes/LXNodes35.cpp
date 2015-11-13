#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "OutSpiral.h"
#include "Spiral.h"
#include "Definition.h"
#include "Pnts.h"
#include "FacesCollection.h"
#include "FeatureCollection.h"
#include "Profile.h"
#include "ProfSurfCollection.h"
#include "ProfAlignCollection.h"
#include "PointFileCollection.h"
#include "F.h"

namespace LX
{

OutSpiralNode::OutSpiralNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<OutSpiral*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OutSpiralNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getSpiral())
        m_arrChildren.push_back(new SpiralNode(m_pLxObj->getSpiral()));
}

bool OutSpiralNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    OutSpiral* pObject = dynamic_cast<OutSpiral*>(m_pObject);
    return bValueSet;
}

bool OutSpiralNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    OutSpiral* pObject = dynamic_cast<OutSpiral*>(m_pObject);
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

String OutSpiralNode::nodeName() const
{
    return L"OutSpiral";
}

DefinitionNode::DefinitionNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Definition*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DefinitionNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getPnts())
        m_arrChildren.push_back(new PntsNode(m_pLxObj->getPnts()));
    m_arrChildren.push_back(new FacesCollectionNode(m_pLxObj->Faces()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"SurfType", L"SurfType"));
    m_arrChildren.push_back(new ValueNode(this, L"Area2DSurf", L"Area2DSurf"));
    m_arrChildren.push_back(new ValueNode(this, L"Area3DSurf", L"Area3DSurf"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevMax", L"ElevMax"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevMin", L"ElevMin"));
}

bool DefinitionNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Definition* pObject = dynamic_cast<Definition*>(m_pObject);
    if (strMemberName == L"SurfType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SurfType();
        }
        else
        {
            pObject->setSurfType(EnumSurfTypeEnumImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Area2DSurf")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Area2DSurf();
        }
        else
        {
            pObject->setArea2DSurf(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Area3DSurf")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Area3DSurf();
        }
        else
        {
            pObject->setArea3DSurf(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ElevMax")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevMax();
        }
        else
        {
            pObject->setElevMax(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ElevMin")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevMin();
        }
        else
        {
            pObject->setElevMin(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool DefinitionNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Definition* pObject = dynamic_cast<Definition*>(m_pObject);
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
    else if (strMemberName == L"SurfType")
    {
        if (pObject->hasValue_SurfType())
        {
            strValue = (EnumSurfTypeEnumImpl(pObject->getSurfType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Area2DSurf")
    {
        if (pObject->hasValue_Area2DSurf())
        {
            strValue = (DoubleObjectImpl(pObject->getArea2DSurf())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Area3DSurf")
    {
        if (pObject->hasValue_Area3DSurf())
        {
            strValue = (DoubleObjectImpl(pObject->getArea3DSurf())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ElevMax")
    {
        if (pObject->hasValue_ElevMax())
        {
            strValue = (DoubleObjectImpl(pObject->getElevMax())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ElevMin")
    {
        if (pObject->hasValue_ElevMin())
        {
            strValue = (DoubleObjectImpl(pObject->getElevMin())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String DefinitionNode::nodeName() const
{
    return L"Definition";
}

ProfileNode::ProfileNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Profile*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ProfileNode :: Invalid Object.");
    int nNumChildren = 7;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ProfSurfCollectionNode(m_pLxObj->ProfSurf()));
    m_arrChildren.push_back(new ProfAlignCollectionNode(m_pLxObj->ProfAlign()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool ProfileNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Profile* pObject = dynamic_cast<Profile*>(m_pObject);
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
    return bValueSet;
}

bool ProfileNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Profile* pObject = dynamic_cast<Profile*>(m_pObject);
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
    return bValueSet;
}

String ProfileNode::nodeName() const
{
    return L"Profile";
}

PointFileCollectionNode::PointFileCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PointFileCollectionNode::PointFileCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PointFileCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PointFileCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PointFileCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PointFileCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PointFileNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PointFileCollectionNode::nodeName() const
{
    return L"PointFileCollection";
}

ILxNode* PointFileCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
FNode::FNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<F*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FNode :: Invalid Object.");
    IntegerCollection* pValObj = dynamic_cast<IntegerCollection*>(m_pLxObj);
    int nNumChildren = 3;
    if (pValObj)
        nNumChildren += 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (pValObj)
    {
        m_arrChildren.push_back(new ValueNode(this, L"value", L"value"));
    }
    m_arrChildren.push_back(new ValueNode(this, L"I", L"I"));
    m_arrChildren.push_back(new ValueNode(this, L"N", L"N"));
    m_arrChildren.push_back(new ValueNode(this, L"B", L"B"));
}

bool FNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    F* pObject = dynamic_cast<F*>(m_pObject);
    if (strMemberName == L"I")
    {
        if (!pstrValue)
        {
            pObject->resetValue_I();
        }
        else
        {
            pObject->setI(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"N")
    {
        if (!pstrValue)
        {
            pObject->setN(NULL);
        }
        else
        {
            pObject->setN(IntegerCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"B")
    {
        if (!pstrValue)
        {
            pObject->resetValue_B();
        }
        else
        {
            pObject->setB(UIntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool FNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    F* pObject = dynamic_cast<F*>(m_pObject);
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
    else if (strMemberName == L"I")
    {
        if (pObject->hasValue_I())
        {
            strValue = (IntegerObjectImpl(pObject->getI())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"N")
    {
        if (pObject->getN())
        {
            strValue = pObject->getN()->toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"B")
    {
        if (pObject->hasValue_B())
        {
            strValue = (UIntegerObjectImpl(pObject->getB())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String FNode::nodeName() const
{
    return L"F";
}

}; // namespace : LX
