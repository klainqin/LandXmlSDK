#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "Surface.h"
#include "SourceData.h"
#include "Definition.h"
#include "Watersheds.h"
#include "FeatureCollection.h"
#include "SurfacesCollection.h"
#include "Curb.h"
#include "OffsetVals.h"
#include "GPSVector.h"
#include "TargetPoint.h"
#include "GPSQCInfoLevel1.h"
#include "GPSQCInfoLevel2.h"
#include "FieldNoteCollection.h"

namespace LX
{

SurfaceNode::SurfaceNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Surface*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfaceNode :: Invalid Object.");
    int nNumChildren = 8;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getSourceData())
        m_arrChildren.push_back(new SourceDataNode(m_pLxObj->getSourceData()));
    if (m_pLxObj->getDefinition())
        m_arrChildren.push_back(new DefinitionNode(m_pLxObj->getDefinition()));
    if (m_pLxObj->getWatersheds())
        m_arrChildren.push_back(new WatershedsNode(m_pLxObj->getWatersheds()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"OID", L"OID"));
    m_arrChildren.push_back(new ValueNode(this, L"State", L"State"));
}

bool SurfaceNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Surface* pObject = dynamic_cast<Surface*>(m_pObject);
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

bool SurfaceNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Surface* pObject = dynamic_cast<Surface*>(m_pObject);
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

String SurfaceNode::nodeName() const
{
    return L"Surface";
}

SurfacesCollectionNode::SurfacesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

SurfacesCollectionNode::SurfacesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void SurfacesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<SurfacesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"SurfacesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    SurfacesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new SurfacesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String SurfacesCollectionNode::nodeName() const
{
    return L"SurfacesCollection";
}

ILxNode* SurfacesCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        SurfacesCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
CurbNode::CurbNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Curb*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CurbNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"SideofRoad", L"SideofRoad"));
    m_arrChildren.push_back(new ValueNode(this, L"Type", L"Type"));
}

bool CurbNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Curb* pObject = dynamic_cast<Curb*>(m_pObject);
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
    if (strMemberName == L"Type")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Type();
        }
        else
        {
            pObject->setType(EnumCurbTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CurbNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Curb* pObject = dynamic_cast<Curb*>(m_pObject);
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
    else if (strMemberName == L"SideofRoad")
    {
        if (pObject->hasValue_SideofRoad())
        {
            strValue = (EnumSideofRoadTypeImpl(pObject->getSideofRoad())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Type")
    {
        if (pObject->hasValue_Type())
        {
            strValue = (EnumCurbTypeImpl(pObject->getType())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CurbNode::nodeName() const
{
    return L"Curb";
}

OffsetValsNode::OffsetValsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<OffsetVals*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"OffsetValsNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new ValueNode(this, L"OffsetInOut", L"OffsetInOut"));
    m_arrChildren.push_back(new ValueNode(this, L"OffsetLeftRight", L"OffsetLeftRight"));
    m_arrChildren.push_back(new ValueNode(this, L"OffsetUpDown", L"OffsetUpDown"));
}

bool OffsetValsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    OffsetVals* pObject = dynamic_cast<OffsetVals*>(m_pObject);
    if (strMemberName == L"OffsetInOut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OffsetInOut();
        }
        else
        {
            pObject->setOffsetInOut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OffsetLeftRight")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OffsetLeftRight();
        }
        else
        {
            pObject->setOffsetLeftRight(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OffsetUpDown")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OffsetUpDown();
        }
        else
        {
            pObject->setOffsetUpDown(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool OffsetValsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    OffsetVals* pObject = dynamic_cast<OffsetVals*>(m_pObject);
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
    else if (strMemberName == L"OffsetInOut")
    {
        if (pObject->hasValue_OffsetInOut())
        {
            strValue = (DoubleObjectImpl(pObject->getOffsetInOut())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OffsetLeftRight")
    {
        if (pObject->hasValue_OffsetLeftRight())
        {
            strValue = (DoubleObjectImpl(pObject->getOffsetLeftRight())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OffsetUpDown")
    {
        if (pObject->hasValue_OffsetUpDown())
        {
            strValue = (DoubleObjectImpl(pObject->getOffsetUpDown())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String OffsetValsNode::nodeName() const
{
    return L"OffsetVals";
}

GPSVectorNode::GPSVectorNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSVector*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSVectorNode :: Invalid Object.");
    int nNumChildren = 18;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getTargetPoint())
        m_arrChildren.push_back(new TargetPointNode(m_pLxObj->getTargetPoint()));
    if (m_pLxObj->getGPSQCInfoLevel1())
        m_arrChildren.push_back(new GPSQCInfoLevel1Node(m_pLxObj->getGPSQCInfoLevel1()));
    if (m_pLxObj->getGPSQCInfoLevel2())
        m_arrChildren.push_back(new GPSQCInfoLevel2Node(m_pLxObj->getGPSQCInfoLevel2()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"DX", L"DX"));
    m_arrChildren.push_back(new ValueNode(this, L"DY", L"DY"));
    m_arrChildren.push_back(new ValueNode(this, L"DZ", L"DZ"));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID_A", L"SetupID_A"));
    m_arrChildren.push_back(new ValueNode(this, L"SetupID_B", L"SetupID_B"));
    m_arrChildren.push_back(new ValueNode(this, L"StartTime", L"StartTime"));
    m_arrChildren.push_back(new ValueNode(this, L"EndTime", L"EndTime"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalPrecision", L"HorizontalPrecision"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalPrecision", L"VerticalPrecision"));
    m_arrChildren.push_back(new ValueNode(this, L"Purpose", L"Purpose"));
    m_arrChildren.push_back(new ValueNode(this, L"SetID", L"SetID"));
    m_arrChildren.push_back(new ValueNode(this, L"SolutionDataLink", L"SolutionDataLink"));
    m_arrChildren.push_back(new ValueNode(this, L"CoordGeomRefs", L"CoordGeomRefs"));
}

bool GPSVectorNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    GPSVector* pObject = dynamic_cast<GPSVector*>(m_pObject);
    if (strMemberName == L"DX")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DX();
        }
        else
        {
            pObject->setDX(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DY")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DY();
        }
        else
        {
            pObject->setDY(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"DZ")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DZ();
        }
        else
        {
            pObject->setDZ(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetupID_A")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetupID_A();
        }
        else
        {
            pObject->setSetupID_A(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetupID_B")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetupID_B();
        }
        else
        {
            pObject->setSetupID_B(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StartTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartTime();
        }
        else
        {
            pObject->setStartTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndTime")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndTime();
        }
        else
        {
            pObject->setEndTime(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizontalPrecision")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalPrecision();
        }
        else
        {
            pObject->setHorizontalPrecision(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalPrecision")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalPrecision();
        }
        else
        {
            pObject->setVerticalPrecision(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Purpose")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Purpose();
        }
        else
        {
            pObject->setPurpose(EnumPurposeTypeImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SetID")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SetID();
        }
        else
        {
            pObject->setSetID(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SolutionDataLink")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SolutionDataLink();
        }
        else
        {
            pObject->setSolutionDataLink(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CoordGeomRefs")
    {
        if (!pstrValue)
        {
            pObject->setCoordGeomRefs(NULL);
        }
        else
        {
            pObject->setCoordGeomRefs(StringCollectionImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool GPSVectorNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    GPSVector* pObject = dynamic_cast<GPSVector*>(m_pObject);
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
    else if (strMemberName == L"DX")
    {
        if (pObject->hasValue_DX())
        {
            strValue = (DoubleObjectImpl(pObject->getDX())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DY")
    {
        if (pObject->hasValue_DY())
        {
            strValue = (DoubleObjectImpl(pObject->getDY())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"DZ")
    {
        if (pObject->hasValue_DZ())
        {
            strValue = (DoubleObjectImpl(pObject->getDZ())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetupID_A")
    {
        if (pObject->hasValue_SetupID_A())
        {
            strValue = (StringObjectImpl(pObject->getSetupID_A())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetupID_B")
    {
        if (pObject->hasValue_SetupID_B())
        {
            strValue = (StringObjectImpl(pObject->getSetupID_B())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StartTime")
    {
        if (pObject->hasValue_StartTime())
        {
            strValue = (StringObjectImpl(pObject->getStartTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndTime")
    {
        if (pObject->hasValue_EndTime())
        {
            strValue = (StringObjectImpl(pObject->getEndTime())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizontalPrecision")
    {
        if (pObject->hasValue_HorizontalPrecision())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizontalPrecision())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalPrecision")
    {
        if (pObject->hasValue_VerticalPrecision())
        {
            strValue = (DoubleObjectImpl(pObject->getVerticalPrecision())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Purpose")
    {
        if (pObject->hasValue_Purpose())
        {
            strValue = (EnumPurposeTypeImpl(pObject->getPurpose())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SetID")
    {
        if (pObject->hasValue_SetID())
        {
            strValue = (StringObjectImpl(pObject->getSetID())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SolutionDataLink")
    {
        if (pObject->hasValue_SolutionDataLink())
        {
            strValue = (StringObjectImpl(pObject->getSolutionDataLink())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CoordGeomRefs")
    {
        if (pObject->getCoordGeomRefs())
        {
            strValue = pObject->getCoordGeomRefs()->toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String GPSVectorNode::nodeName() const
{
    return L"GPSVector";
}

}; // namespace : LX
