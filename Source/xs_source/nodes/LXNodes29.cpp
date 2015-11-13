#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Struct.h"
#include "Center.h"
#include "CircStruct.h"
#include "RectStruct.h"
#include "InletStruct.h"
#include "OutletStruct.h"
#include "Connection.h"
#include "InvertCollection.h"
#include "StructFlow.h"
#include "FeatureCollection.h"
#include "IntersectionsCollection.h"
#include "PostedSpeedCollection.h"
#include "LaserSetup.h"
#include "InstrumentPoint.h"
#include "Backsight.h"
#include "TargetSetupCollection.h"
#include "RawObservation.h"
#include "FieldNoteCollection.h"
#include "CgPointsCollection.h"

namespace LX
{

StructNode::StructNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Struct*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StructNode :: Invalid Object.");
    int nNumChildren = 11;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCenter())
        m_arrChildren.push_back(new CenterNode(m_pLxObj->getCenter()));
    if (dynamic_cast<CircStruct*>(m_pLxObj->getStructGeom()))
        if (m_pLxObj->getStructGeom())
            m_arrChildren.push_back(new CircStructNode(m_pLxObj->getStructGeom()));
    if (dynamic_cast<RectStruct*>(m_pLxObj->getStructGeom()))
        if (m_pLxObj->getStructGeom())
            m_arrChildren.push_back(new RectStructNode(m_pLxObj->getStructGeom()));
    if (dynamic_cast<InletStruct*>(m_pLxObj->getStructGeom()))
        if (m_pLxObj->getStructGeom())
            m_arrChildren.push_back(new InletStructNode(m_pLxObj->getStructGeom()));
    if (dynamic_cast<OutletStruct*>(m_pLxObj->getStructGeom()))
        if (m_pLxObj->getStructGeom())
            m_arrChildren.push_back(new OutletStructNode(m_pLxObj->getStructGeom()));
    if (dynamic_cast<Connection*>(m_pLxObj->getStructGeom()))
        if (m_pLxObj->getStructGeom())
            m_arrChildren.push_back(new ConnectionNode(m_pLxObj->getStructGeom()));
    m_arrChildren.push_back(new InvertCollectionNode(m_pLxObj->Invert()));
    if (m_pLxObj->getStructFlow())
        m_arrChildren.push_back(new StructFlowNode(m_pLxObj->getStructFlow()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevRim", L"ElevRim"));
    m_arrChildren.push_back(new ValueNode(this, L"ElevSump", L"ElevSump"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool StructNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Struct* pObject = dynamic_cast<Struct*>(m_pObject);
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
    if (strMemberName == L"ElevRim")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevRim();
        }
        else
        {
            pObject->setElevRim(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ElevSump")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ElevSump();
        }
        else
        {
            pObject->setElevSump(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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

bool StructNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Struct* pObject = dynamic_cast<Struct*>(m_pObject);
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
    else if (strMemberName == L"ElevRim")
    {
        if (pObject->hasValue_ElevRim())
        {
            strValue = (DoubleObjectImpl(pObject->getElevRim())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ElevSump")
    {
        if (pObject->hasValue_ElevSump())
        {
            strValue = (DoubleObjectImpl(pObject->getElevSump())).toString();
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

String StructNode::nodeName() const
{
    return L"Struct";
}

IntersectionsCollectionNode::IntersectionsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

IntersectionsCollectionNode::IntersectionsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void IntersectionsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<IntersectionsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"IntersectionsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    IntersectionsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new IntersectionsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String IntersectionsCollectionNode::nodeName() const
{
    return L"IntersectionsCollection";
}

ILxNode* IntersectionsCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
PostedSpeedCollectionNode::PostedSpeedCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

PostedSpeedCollectionNode::PostedSpeedCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void PostedSpeedCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<PostedSpeedCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"PostedSpeedCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    PostedSpeedCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new PostedSpeedNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String PostedSpeedCollectionNode::nodeName() const
{
    return L"PostedSpeedCollection";
}

ILxNode* PostedSpeedCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
LaserSetupNode::LaserSetupNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<LaserSetup*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"LaserSetupNode :: Invalid Object.");
    int nNumChildren = 11;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getInstrumentPoint())
        m_arrChildren.push_back(new InstrumentPointNode(m_pLxObj->getInstrumentPoint()));
    if (m_pLxObj->getBacksight())
        m_arrChildren.push_back(new BacksightNode(m_pLxObj->getBacksight()));
    m_arrChildren.push_back(new TargetSetupCollectionNode(m_pLxObj->TargetSetup()));
    if (m_pLxObj->getRawObservation())
        m_arrChildren.push_back(new RawObservationNode(m_pLxObj->getRawObservation()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"StationName", L"StationName"));
    m_arrChildren.push_back(new ValueNode(this, L"InstrumentHeight", L"InstrumentHeight"));
    m_arrChildren.push_back(new ValueNode(this, L"LaserDetailsID", L"LaserDetailsID"));
    m_arrChildren.push_back(new ValueNode(this, L"MagDeclination", L"MagDeclination"));
}

bool LaserSetupNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    LaserSetup* pObject = dynamic_cast<LaserSetup*>(m_pObject);
    if (strMemberName == L"Id")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Id();
        }
        else
        {
            pObject->setId(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StationName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StationName();
        }
        else
        {
            pObject->setStationName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"InstrumentHeight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_InstrumentHeight();
        }
        else
        {
            pObject->setInstrumentHeight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LaserDetailsID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LaserDetailsID();
        }
        else
        {
            pObject->setLaserDetailsID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"MagDeclination")
    {
        if (!pstrValue)
        {
            pObject->resetValue_MagDeclination();
        }
        else
        {
            pObject->setMagDeclination(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool LaserSetupNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    LaserSetup* pObject = dynamic_cast<LaserSetup*>(m_pObject);
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
    else if (strMemberName == L"Id")
    {
        if (pObject->hasValue_Id())
        {
            strValue = (StringObjectImpl(pObject->getId())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StationName")
    {
        if (pObject->hasValue_StationName())
        {
            strValue = (StringObjectImpl(pObject->getStationName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"InstrumentHeight")
    {
        if (pObject->hasValue_InstrumentHeight())
        {
            strValue = (DoubleObjectImpl(pObject->getInstrumentHeight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LaserDetailsID")
    {
        if (pObject->hasValue_LaserDetailsID())
        {
            strValue = (StringObjectImpl(pObject->getLaserDetailsID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"MagDeclination")
    {
        if (pObject->hasValue_MagDeclination())
        {
            strValue = (DoubleObjectImpl(pObject->getMagDeclination())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String LaserSetupNode::nodeName() const
{
    return L"LaserSetup";
}

CgPointsCollectionNode::CgPointsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

CgPointsCollectionNode::CgPointsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void CgPointsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CgPointsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CgPointsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    CgPointsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new CgPointsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String CgPointsCollectionNode::nodeName() const
{
    return L"CgPointsCollection";
}

ILxNode* CgPointsCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        CgPointsCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
