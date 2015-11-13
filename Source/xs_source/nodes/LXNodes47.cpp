#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "AlignPIs.h"
#include "AlignPICollection.h"
#include "AlignPI.h"
#include "Station.h"
#include "POI.h"
#include "InSpiral.h"
#include "Curve1.h"
#include "ConnSpiral.h"
#include "Curve2.h"
#include "OutSpiral.h"
#include "DataPoints.h"
#include "PntList3DCollection.h"
#include "FeatureCollection.h"
#include "FullSuperSta.h"
#include "Contour.h"
#include "PntList2D.h"

namespace LX
{

AlignPIsNode::AlignPIsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AlignPIs*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignPIsNode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new AlignPICollectionNode(m_pLxObj->AlignPI()));
}

bool AlignPIsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    AlignPIs* pObject = dynamic_cast<AlignPIs*>(m_pObject);
    return bValueSet;
}

bool AlignPIsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    AlignPIs* pObject = dynamic_cast<AlignPIs*>(m_pObject);
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

String AlignPIsNode::nodeName() const
{
    return L"AlignPIs";
}

AlignPI_INNER_COLLECTION_1_78Node::AlignPI_INNER_COLLECTION_1_78Node (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AlignPI_INNER_COLLECTION_1_78Node::AlignPI_INNER_COLLECTION_1_78Node (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AlignPI_INNER_COLLECTION_1_78Node::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ObjectCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignPI_INNER_COLLECTION_1_78Node :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ObjectCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        if (dynamic_cast<Station*>(pIterator->current()))
            m_arrChildren.push_back(new StationNode(pIterator->current()));
        if (dynamic_cast<POI*>(pIterator->current()))
            m_arrChildren.push_back(new POINode(pIterator->current()));
        if (dynamic_cast<InSpiral*>(pIterator->current()))
            m_arrChildren.push_back(new InSpiralNode(pIterator->current()));
        if (dynamic_cast<Curve1*>(pIterator->current()))
            m_arrChildren.push_back(new Curve1Node(pIterator->current()));
        if (dynamic_cast<ConnSpiral*>(pIterator->current()))
            m_arrChildren.push_back(new ConnSpiralNode(pIterator->current()));
        if (dynamic_cast<Curve2*>(pIterator->current()))
            m_arrChildren.push_back(new Curve2Node(pIterator->current()));
        if (dynamic_cast<OutSpiral*>(pIterator->current()))
            m_arrChildren.push_back(new OutSpiralNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AlignPI_INNER_COLLECTION_1_78Node::nodeName() const
{
    return L"AlignPI_INNER_COLLECTION_1_78";
}

ILxNode* AlignPI_INNER_COLLECTION_1_78Node::findChild(const String& strChildId) const
{
    return NULL;
}
AlignPINode::AlignPINode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AlignPI*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignPINode :: Invalid Object.");
    int nNumChildren = 1;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new AlignPI_INNER_COLLECTION_1_78Node(m_pLxObj->PIList()));
}

bool AlignPINode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    AlignPI* pObject = dynamic_cast<AlignPI*>(m_pObject);
    return bValueSet;
}

bool AlignPINode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    AlignPI* pObject = dynamic_cast<AlignPI*>(m_pObject);
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

String AlignPINode::nodeName() const
{
    return L"AlignPI";
}

DataPointsNode::DataPointsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<DataPoints*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"DataPointsNode :: Invalid Object.");
    int nNumChildren = 9;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new PntList3DCollectionNode(m_pLxObj->PntList3D()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Code", L"Code"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"PntRef", L"PntRef"));
    m_arrChildren.push_back(new ValueNode(this, L"PointGeometry", L"PointGeometry"));
    m_arrChildren.push_back(new ValueNode(this, L"DTMAttribute", L"DTMAttribute"));
}

bool DataPointsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    DataPoints* pObject = dynamic_cast<DataPoints*>(m_pObject);
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
    return bValueSet;
}

bool DataPointsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    DataPoints* pObject = dynamic_cast<DataPoints*>(m_pObject);
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
    return bValueSet;
}

String DataPointsNode::nodeName() const
{
    return L"DataPoints";
}

FullSuperStaNode::FullSuperStaNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FullSuperSta*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FullSuperStaNode :: Invalid Object.");
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

bool FullSuperStaNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    FullSuperSta* pObject = dynamic_cast<FullSuperSta*>(m_pObject);
    return bValueSet;
}

bool FullSuperStaNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    FullSuperSta* pObject = dynamic_cast<FullSuperSta*>(m_pObject);
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

String FullSuperStaNode::nodeName() const
{
    return L"FullSuperSta";
}

ContourNode::ContourNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Contour*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ContourNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getPntList2D())
        m_arrChildren.push_back(new PntList2DNode(m_pLxObj->getPntList2D()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Elev", L"Elev"));
}

bool ContourNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Contour* pObject = dynamic_cast<Contour*>(m_pObject);
    if (strMemberName == L"Elev")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Elev();
        }
        else
        {
            pObject->setElev(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ContourNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Contour* pObject = dynamic_cast<Contour*>(m_pObject);
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
    else if (strMemberName == L"Elev")
    {
        if (pObject->hasValue_Elev())
        {
            strValue = (DoubleObjectImpl(pObject->getElev())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ContourNode::nodeName() const
{
    return L"Contour";
}

}; // namespace : LX
