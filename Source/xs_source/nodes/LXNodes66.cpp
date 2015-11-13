#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "BeginRunoffSta.h"
#include "PipeNetwork.h"
#include "Structs.h"
#include "Pipes.h"
#include "FeatureCollection.h"
#include "StaEquationCollection.h"
#include "ZoneHingeCollection.h"
#include "GPSSetupCollection.h"

namespace LX
{

BeginRunoffStaNode::BeginRunoffStaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<BeginRunoffSta*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"BeginRunoffStaNode :: Invalid Object.");
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

bool BeginRunoffStaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    BeginRunoffSta* pObject = dynamic_cast<BeginRunoffSta*>(m_pObject);
    return bValueSet;
}

bool BeginRunoffStaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    BeginRunoffSta* pObject = dynamic_cast<BeginRunoffSta*>(m_pObject);
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

String BeginRunoffStaNode::nodeName() const
{
    return L"BeginRunoffSta";
}

PipeNetworkNode::PipeNetworkNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PipeNetwork*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeNetworkNode :: Invalid Object.");
    int nNumChildren = 9;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStructs())
        m_arrChildren.push_back(new StructsNode(m_pLxObj->getStructs()));
    if (m_pLxObj->getPipes())
        m_arrChildren.push_back(new PipesNode(m_pLxObj->getPipes()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"PipeNetType", L"PipeNetType"));
    m_arrChildren.push_back(new ValueNode(this, L"AlignmentRef", L"AlignmentRef"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool PipeNetworkNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    PipeNetwork* pObject = dynamic_cast<PipeNetwork*>(m_pObject);
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
    if (strMemberName == L"PipeNetType")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PipeNetType();
        }
        else
        {
            pObject->setPipeNetType(EnumPipeNetworkTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AlignmentRef")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AlignmentRef();
        }
        else
        {
            pObject->setAlignmentRef(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool PipeNetworkNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    PipeNetwork* pObject = dynamic_cast<PipeNetwork*>(m_pObject);
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
    else if (strMemberName == L"PipeNetType")
    {
        if (pObject->hasValue_PipeNetType())
        {
            strValue = (EnumPipeNetworkTypeImpl(pObject->getPipeNetType())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AlignmentRef")
    {
        if (pObject->hasValue_AlignmentRef())
        {
            strValue = (StringObjectImpl(pObject->getAlignmentRef())).toString();
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

String PipeNetworkNode::nodeName() const
{
    return L"PipeNetwork";
}

StaEquationCollectionNode::StaEquationCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

StaEquationCollectionNode::StaEquationCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void StaEquationCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<StaEquationCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StaEquationCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    StaEquationCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new StaEquationNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String StaEquationCollectionNode::nodeName() const
{
    return L"StaEquationCollection";
}

ILxNode* StaEquationCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
ZoneHingeCollectionNode::ZoneHingeCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZoneHingeCollectionNode::ZoneHingeCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZoneHingeCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneHingeCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneHingeCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZoneHingeCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZoneHingeNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZoneHingeCollectionNode::nodeName() const
{
    return L"ZoneHingeCollection";
}

ILxNode* ZoneHingeCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
GPSSetupCollectionNode::GPSSetupCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

GPSSetupCollectionNode::GPSSetupCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void GPSSetupCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSSetupCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSSetupCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    GPSSetupCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new GPSSetupNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String GPSSetupCollectionNode::nodeName() const
{
    return L"GPSSetupCollection";
}

ILxNode* GPSSetupCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
