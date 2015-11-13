#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "CoordGeom.h"
#include "Line.h"
#include "IrregularLine.h"
#include "Curve.h"
#include "Spiral.h"
#include "Chain.h"
#include "FeatureCollection.h"
#include "ObservationGroupCollection.h"
#include "AmendmentItem.h"
#include "PipeCollection.h"
#include "Volume.h"

namespace LX
{

CoordGeom_INNER_COLLECTION_1_70Node::CoordGeom_INNER_COLLECTION_1_70Node (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CoordGeom_INNER_COLLECTION_1_70Node::CoordGeom_INNER_COLLECTION_1_70Node (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CoordGeom_INNER_COLLECTION_1_70Node::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ObjectCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CoordGeom_INNER_COLLECTION_1_70Node :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ObjectCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        if (dynamic_cast<Line*>(pIterator->current()))
            m_arrChildren.push_back(new LineNode(pIterator->current()));
        if (dynamic_cast<IrregularLine*>(pIterator->current()))
            m_arrChildren.push_back(new IrregularLineNode(pIterator->current()));
        if (dynamic_cast<Curve*>(pIterator->current()))
            m_arrChildren.push_back(new CurveNode(pIterator->current()));
        if (dynamic_cast<Spiral*>(pIterator->current()))
            m_arrChildren.push_back(new SpiralNode(pIterator->current()));
        if (dynamic_cast<Chain*>(pIterator->current()))
            m_arrChildren.push_back(new ChainNode(pIterator->current()));
        if (dynamic_cast<FeatureCollection*>(pIterator->current()))
            m_arrChildren.push_back(new FeatureCollectionNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CoordGeom_INNER_COLLECTION_1_70Node::nodeName() const
{
    return L"CoordGeom_INNER_COLLECTION_1_70";
}

ILxNode* CoordGeom_INNER_COLLECTION_1_70Node::findChild(const String& strChildId) const
{
    return NULL;
}
CoordGeomNode::CoordGeomNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CoordGeom*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CoordGeomNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new CoordGeom_INNER_COLLECTION_1_70Node(m_pLxObj->GeomList()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
}

bool CoordGeomNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CoordGeom* pObject = dynamic_cast<CoordGeom*>(m_pObject);
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

bool CoordGeomNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CoordGeom* pObject = dynamic_cast<CoordGeom*>(m_pObject);
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

String CoordGeomNode::nodeName() const
{
    return L"CoordGeom";
}

ObservationGroupCollectionNode::ObservationGroupCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ObservationGroupCollectionNode::ObservationGroupCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ObservationGroupCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ObservationGroupCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ObservationGroupCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ObservationGroupCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ObservationGroupNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ObservationGroupCollectionNode::nodeName() const
{
    return L"ObservationGroupCollection";
}

ILxNode* ObservationGroupCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
AmendmentItemNode::AmendmentItemNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AmendmentItem*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AmendmentItemNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"ElementName", L"ElementName"));
    m_arrChildren.push_back(new ValueNode(this, L"OldName", L"OldName"));
    m_arrChildren.push_back(new ValueNode(this, L"NewName", L"NewName"));
}

bool AmendmentItemNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    AmendmentItem* pObject = dynamic_cast<AmendmentItem*>(m_pObject);
    if (strMemberName == L"ElementName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElementName();
        }
        else
        {
            pObject->setElementName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OldName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OldName();
        }
        else
        {
            pObject->setOldName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"NewName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_NewName();
        }
        else
        {
            pObject->setNewName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool AmendmentItemNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    AmendmentItem* pObject = dynamic_cast<AmendmentItem*>(m_pObject);
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
    else if (strMemberName == L"ElementName")
    {
        if (pObject->hasValue_ElementName())
        {
            strValue = (StringObjectImpl(pObject->getElementName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OldName")
    {
        if (pObject->hasValue_OldName())
        {
            strValue = (StringObjectImpl(pObject->getOldName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"NewName")
    {
        if (pObject->hasValue_NewName())
        {
            strValue = (StringObjectImpl(pObject->getNewName())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String AmendmentItemNode::nodeName() const
{
    return L"AmendmentItem";
}

PipeCollectionNode::PipeCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PipeCollectionNode::PipeCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PipeCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PipeCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PipeCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PipeCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PipeNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PipeCollectionNode::nodeName() const
{
    return L"PipeCollection";
}

ILxNode* PipeCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        PipeCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
VolumeNode::VolumeNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Volume*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"VolumeNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"Station", L"Station"));
    m_arrChildren.push_back(new ValueNode(this, L"LegNumber", L"LegNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"TurnPercent", L"TurnPercent"));
    m_arrChildren.push_back(new ValueNode(this, L"PercentTrucks", L"PercentTrucks"));
}

bool VolumeNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Volume* pObject = dynamic_cast<Volume*>(m_pObject);
    if (strMemberName == L"Station")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Station();
        }
        else
        {
            pObject->setStation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LegNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LegNumber();
        }
        else
        {
            pObject->setLegNumber(IntegerObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"TurnPercent")
    {
        if (!pstrValue)
        {
            pObject->resetValue_TurnPercent();
        }
        else
        {
            pObject->setTurnPercent(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"PercentTrucks")
    {
        if (!pstrValue)
        {
            pObject->resetValue_PercentTrucks();
        }
        else
        {
            pObject->setPercentTrucks(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool VolumeNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Volume* pObject = dynamic_cast<Volume*>(m_pObject);
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
    else if (strMemberName == L"Station")
    {
        if (pObject->hasValue_Station())
        {
            strValue = (DoubleObjectImpl(pObject->getStation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LegNumber")
    {
        if (pObject->hasValue_LegNumber())
        {
            strValue = (IntegerObjectImpl(pObject->getLegNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"TurnPercent")
    {
        if (pObject->hasValue_TurnPercent())
        {
            strValue = (DoubleObjectImpl(pObject->getTurnPercent())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"PercentTrucks")
    {
        if (pObject->hasValue_PercentTrucks())
        {
            strValue = (DoubleObjectImpl(pObject->getPercentTrucks())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String VolumeNode::nodeName() const
{
    return L"Volume";
}

}; // namespace : LX
