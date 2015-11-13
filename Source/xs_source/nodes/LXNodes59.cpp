#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "CoordinateSystem.h"
#include "Start.h"
#include "FieldNoteCollection.h"
#include "FeatureCollection.h"
#include "ZonesCollection.h"
#include "FeatureDictionary.h"
#include "DocFileRefCollection.h"
#include "ZoneWidth.h"
#include "GPSVectorCollection.h"

namespace LX
{

CoordinateSystemNode::CoordinateSystemNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<CoordinateSystem*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"CoordinateSystemNode :: Invalid Object.");
    int nNumChildren = 21;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getStart())
        m_arrChildren.push_back(new StartNode(m_pLxObj->getStart()));
    m_arrChildren.push_back(new FieldNoteCollectionNode(m_pLxObj->FieldNote()));
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"EpsgCode", L"EpsgCode"));
    m_arrChildren.push_back(new ValueNode(this, L"OgcWktCode", L"OgcWktCode"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalDatum", L"HorizontalDatum"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalDatum", L"VerticalDatum"));
    m_arrChildren.push_back(new ValueNode(this, L"EllipsoidName", L"EllipsoidName"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizontalCoordinateSystemName", L"HorizontalCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"GeocentricCoordinateSystemName", L"GeocentricCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"FileLocation", L"FileLocation"));
    m_arrChildren.push_back(new ValueNode(this, L"RotationAngle", L"RotationAngle"));
    m_arrChildren.push_back(new ValueNode(this, L"Datum", L"Datum"));
    m_arrChildren.push_back(new ValueNode(this, L"FittedCoordinateSystemName", L"FittedCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"CompoundCoordinateSystemName", L"CompoundCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"LocalCoordinateSystemName", L"LocalCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"GeographicCoordinateSystemName", L"GeographicCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"ProjectedCoordinateSystemName", L"ProjectedCoordinateSystemName"));
    m_arrChildren.push_back(new ValueNode(this, L"VerticalCoordinateSystemName", L"VerticalCoordinateSystemName"));
}

bool CoordinateSystemNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    CoordinateSystem* pObject = dynamic_cast<CoordinateSystem*>(m_pObject);
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
    if (strMemberName == L"EpsgCode")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EpsgCode();
        }
        else
        {
            pObject->setEpsgCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"OgcWktCode")
    {
        if (!pstrValue)
        {
            pObject->resetValue_OgcWktCode();
        }
        else
        {
            pObject->setOgcWktCode(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizontalDatum")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalDatum();
        }
        else
        {
            pObject->setHorizontalDatum(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalDatum")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalDatum();
        }
        else
        {
            pObject->setVerticalDatum(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EllipsoidName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EllipsoidName();
        }
        else
        {
            pObject->setEllipsoidName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizontalCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizontalCoordinateSystemName();
        }
        else
        {
            pObject->setHorizontalCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GeocentricCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GeocentricCoordinateSystemName();
        }
        else
        {
            pObject->setGeocentricCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FileLocation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FileLocation();
        }
        else
        {
            pObject->setFileLocation(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RotationAngle")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RotationAngle();
        }
        else
        {
            pObject->setRotationAngle(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Datum")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Datum();
        }
        else
        {
            pObject->setDatum(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"FittedCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_FittedCoordinateSystemName();
        }
        else
        {
            pObject->setFittedCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CompoundCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CompoundCoordinateSystemName();
        }
        else
        {
            pObject->setCompoundCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LocalCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LocalCoordinateSystemName();
        }
        else
        {
            pObject->setLocalCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"GeographicCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_GeographicCoordinateSystemName();
        }
        else
        {
            pObject->setGeographicCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ProjectedCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ProjectedCoordinateSystemName();
        }
        else
        {
            pObject->setProjectedCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VerticalCoordinateSystemName")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VerticalCoordinateSystemName();
        }
        else
        {
            pObject->setVerticalCoordinateSystemName(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool CoordinateSystemNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    CoordinateSystem* pObject = dynamic_cast<CoordinateSystem*>(m_pObject);
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
    else if (strMemberName == L"EpsgCode")
    {
        if (pObject->hasValue_EpsgCode())
        {
            strValue = (StringObjectImpl(pObject->getEpsgCode())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"OgcWktCode")
    {
        if (pObject->hasValue_OgcWktCode())
        {
            strValue = (StringObjectImpl(pObject->getOgcWktCode())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizontalDatum")
    {
        if (pObject->hasValue_HorizontalDatum())
        {
            strValue = (StringObjectImpl(pObject->getHorizontalDatum())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalDatum")
    {
        if (pObject->hasValue_VerticalDatum())
        {
            strValue = (StringObjectImpl(pObject->getVerticalDatum())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EllipsoidName")
    {
        if (pObject->hasValue_EllipsoidName())
        {
            strValue = (StringObjectImpl(pObject->getEllipsoidName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizontalCoordinateSystemName")
    {
        if (pObject->hasValue_HorizontalCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getHorizontalCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GeocentricCoordinateSystemName")
    {
        if (pObject->hasValue_GeocentricCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getGeocentricCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FileLocation")
    {
        if (pObject->hasValue_FileLocation())
        {
            strValue = (StringObjectImpl(pObject->getFileLocation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RotationAngle")
    {
        if (pObject->hasValue_RotationAngle())
        {
            strValue = (DoubleObjectImpl(pObject->getRotationAngle())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Datum")
    {
        if (pObject->hasValue_Datum())
        {
            strValue = (StringObjectImpl(pObject->getDatum())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"FittedCoordinateSystemName")
    {
        if (pObject->hasValue_FittedCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getFittedCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CompoundCoordinateSystemName")
    {
        if (pObject->hasValue_CompoundCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getCompoundCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LocalCoordinateSystemName")
    {
        if (pObject->hasValue_LocalCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getLocalCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"GeographicCoordinateSystemName")
    {
        if (pObject->hasValue_GeographicCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getGeographicCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ProjectedCoordinateSystemName")
    {
        if (pObject->hasValue_ProjectedCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getProjectedCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VerticalCoordinateSystemName")
    {
        if (pObject->hasValue_VerticalCoordinateSystemName())
        {
            strValue = (StringObjectImpl(pObject->getVerticalCoordinateSystemName())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String CoordinateSystemNode::nodeName() const
{
    return L"CoordinateSystem";
}

ZonesCollectionNode::ZonesCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

ZonesCollectionNode::ZonesCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void ZonesCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZonesCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZonesCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    ZonesCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new ZonesNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String ZonesCollectionNode::nodeName() const
{
    return L"ZonesCollection";
}

ILxNode* ZonesCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        ZonesCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
FeatureDictionaryNode::FeatureDictionaryNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<FeatureDictionary*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"FeatureDictionaryNode :: Invalid Object.");
    int nNumChildren = 3;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new DocFileRefCollectionNode(m_pLxObj->DocFileRef()));
    m_arrChildren.push_back(new ValueNode(this, L"Name", L"Name"));
    m_arrChildren.push_back(new ValueNode(this, L"Version", L"Version"));
}

bool FeatureDictionaryNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    FeatureDictionary* pObject = dynamic_cast<FeatureDictionary*>(m_pObject);
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
    if (strMemberName == L"Version")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Version();
        }
        else
        {
            pObject->setVersion(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool FeatureDictionaryNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    FeatureDictionary* pObject = dynamic_cast<FeatureDictionary*>(m_pObject);
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
    else if (strMemberName == L"Version")
    {
        if (pObject->hasValue_Version())
        {
            strValue = (StringObjectImpl(pObject->getVersion())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String FeatureDictionaryNode::nodeName() const
{
    return L"FeatureDictionary";
}

ZoneWidthNode::ZoneWidthNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<ZoneWidth*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"ZoneWidthNode :: Invalid Object.");
    int nNumChildren = 5;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"StaStart", L"StaStart"));
    m_arrChildren.push_back(new ValueNode(this, L"StaEnd", L"StaEnd"));
    m_arrChildren.push_back(new ValueNode(this, L"StartWidth", L"StartWidth"));
    m_arrChildren.push_back(new ValueNode(this, L"EndWidth", L"EndWidth"));
}

bool ZoneWidthNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    ZoneWidth* pObject = dynamic_cast<ZoneWidth*>(m_pObject);
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
    if (strMemberName == L"StartWidth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StartWidth();
        }
        else
        {
            pObject->setStartWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EndWidth")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EndWidth();
        }
        else
        {
            pObject->setEndWidth(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool ZoneWidthNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    ZoneWidth* pObject = dynamic_cast<ZoneWidth*>(m_pObject);
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
    else if (strMemberName == L"StartWidth")
    {
        if (pObject->hasValue_StartWidth())
        {
            strValue = (DoubleObjectImpl(pObject->getStartWidth())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EndWidth")
    {
        if (pObject->hasValue_EndWidth())
        {
            strValue = (DoubleObjectImpl(pObject->getEndWidth())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String ZoneWidthNode::nodeName() const
{
    return L"ZoneWidth";
}

GPSVectorCollectionNode::GPSVectorCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

GPSVectorCollectionNode::GPSVectorCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void GPSVectorCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<GPSVectorCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"GPSVectorCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    GPSVectorCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new GPSVectorNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String GPSVectorCollectionNode::nodeName() const
{
    return L"GPSVectorCollection";
}

ILxNode* GPSVectorCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
