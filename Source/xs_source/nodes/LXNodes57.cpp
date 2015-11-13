#include "stdafx.h"
#include "ObjectNode.h"
#include "CollectionNode.h"
#include "ValueNode.h"
#include "Exception.h"
#include "ValueTypeObjects.h"
#include "LXTypesImpl.h"
#include "LXNodes.h"
#include "AlignmentsCollection.h"
#include "Amendment.h"
#include "AmendmentItemCollection.h"
#include "InstrumentDetails.h"
#include "Corrections.h"
#include "StructFlow.h"
#include "FeatureCollection.h"
#include "NoPassingZoneCollection.h"

namespace LX
{

AlignmentsCollectionNode::AlignmentsCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

AlignmentsCollectionNode::AlignmentsCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void AlignmentsCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<AlignmentsCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AlignmentsCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    AlignmentsCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new AlignmentsNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String AlignmentsCollectionNode::nodeName() const
{
    return L"AlignmentsCollection";
}

ILxNode* AlignmentsCollectionNode::findChild(const String& strChildId) const
{
    // Grab string from child
    StringObjectImpl::Type idValue;
    ILxNode* pFoundNode = NULL;
    if (StringObjectImpl::parseString(strChildId.c_str(), strChildId.size(), idValue))
    {
        AlignmentsCollectionIterator* pFoundIter = m_pLxObj->find(idValue);
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
AmendmentNode::AmendmentNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<Amendment*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"AmendmentNode :: Invalid Object.");
    int nNumChildren = 4;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new AmendmentItemCollectionNode(m_pLxObj->AmendmentItem()));
    m_arrChildren.push_back(new ValueNode(this, L"DealingNumber", L"DealingNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"AmendmentDate", L"AmendmentDate"));
    m_arrChildren.push_back(new ValueNode(this, L"Comments", L"Comments"));
}

bool AmendmentNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    Amendment* pObject = dynamic_cast<Amendment*>(m_pObject);
    if (strMemberName == L"DealingNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_DealingNumber();
        }
        else
        {
            pObject->setDealingNumber(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"AmendmentDate")
    {
        if (!pstrValue)
        {
            pObject->resetValue_AmendmentDate();
        }
        else
        {
            pObject->setAmendmentDate(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Comments")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Comments();
        }
        else
        {
            pObject->setComments(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool AmendmentNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    Amendment* pObject = dynamic_cast<Amendment*>(m_pObject);
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
    else if (strMemberName == L"DealingNumber")
    {
        if (pObject->hasValue_DealingNumber())
        {
            strValue = (StringObjectImpl(pObject->getDealingNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"AmendmentDate")
    {
        if (pObject->hasValue_AmendmentDate())
        {
            strValue = (StringObjectImpl(pObject->getAmendmentDate())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Comments")
    {
        if (pObject->hasValue_Comments())
        {
            strValue = (StringObjectImpl(pObject->getComments())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String AmendmentNode::nodeName() const
{
    return L"Amendment";
}

InstrumentDetailsNode::InstrumentDetailsNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<InstrumentDetails*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"InstrumentDetailsNode :: Invalid Object.");
    int nNumChildren = 15;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    if (m_pLxObj->getCorrections())
        m_arrChildren.push_back(new CorrectionsNode(m_pLxObj->getCorrections()));
    m_arrChildren.push_back(new ValueNode(this, L"Id", L"Id"));
    m_arrChildren.push_back(new ValueNode(this, L"EdmAccuracyConstant", L"EdmAccuracyConstant"));
    m_arrChildren.push_back(new ValueNode(this, L"EdmAccuracyppm", L"EdmAccuracyppm"));
    m_arrChildren.push_back(new ValueNode(this, L"EdmVertOffset", L"EdmVertOffset"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizAnglePrecision", L"HorizAnglePrecision"));
    m_arrChildren.push_back(new ValueNode(this, L"Manufacturer", L"Manufacturer"));
    m_arrChildren.push_back(new ValueNode(this, L"Model", L"Model"));
    m_arrChildren.push_back(new ValueNode(this, L"SerialNumber", L"SerialNumber"));
    m_arrChildren.push_back(new ValueNode(this, L"ZenithAnglePrecision", L"ZenithAnglePrecision"));
    m_arrChildren.push_back(new ValueNode(this, L"CarrierWavelength", L"CarrierWavelength"));
    m_arrChildren.push_back(new ValueNode(this, L"RefractiveIndex", L"RefractiveIndex"));
    m_arrChildren.push_back(new ValueNode(this, L"HorizCollimation", L"HorizCollimation"));
    m_arrChildren.push_back(new ValueNode(this, L"VertCollimation", L"VertCollimation"));
    m_arrChildren.push_back(new ValueNode(this, L"StadiaFactor", L"StadiaFactor"));
}

bool InstrumentDetailsNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    InstrumentDetails* pObject = dynamic_cast<InstrumentDetails*>(m_pObject);
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
    if (strMemberName == L"EdmAccuracyConstant")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EdmAccuracyConstant();
        }
        else
        {
            pObject->setEdmAccuracyConstant(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EdmAccuracyppm")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EdmAccuracyppm();
        }
        else
        {
            pObject->setEdmAccuracyppm(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"EdmVertOffset")
    {
        if (!pstrValue)
        {
            pObject->resetValue_EdmVertOffset();
        }
        else
        {
            pObject->setEdmVertOffset(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizAnglePrecision")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizAnglePrecision();
        }
        else
        {
            pObject->setHorizAnglePrecision(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Manufacturer")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Manufacturer();
        }
        else
        {
            pObject->setManufacturer(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"Model")
    {
        if (!pstrValue)
        {
            pObject->resetValue_Model();
        }
        else
        {
            pObject->setModel(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SerialNumber")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SerialNumber();
        }
        else
        {
            pObject->setSerialNumber(StringObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"ZenithAnglePrecision")
    {
        if (!pstrValue)
        {
            pObject->resetValue_ZenithAnglePrecision();
        }
        else
        {
            pObject->setZenithAnglePrecision(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"CarrierWavelength")
    {
        if (!pstrValue)
        {
            pObject->resetValue_CarrierWavelength();
        }
        else
        {
            pObject->setCarrierWavelength(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"RefractiveIndex")
    {
        if (!pstrValue)
        {
            pObject->resetValue_RefractiveIndex();
        }
        else
        {
            pObject->setRefractiveIndex(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HorizCollimation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HorizCollimation();
        }
        else
        {
            pObject->setHorizCollimation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"VertCollimation")
    {
        if (!pstrValue)
        {
            pObject->resetValue_VertCollimation();
        }
        else
        {
            pObject->setVertCollimation(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"StadiaFactor")
    {
        if (!pstrValue)
        {
            pObject->resetValue_StadiaFactor();
        }
        else
        {
            pObject->setStadiaFactor(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool InstrumentDetailsNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    InstrumentDetails* pObject = dynamic_cast<InstrumentDetails*>(m_pObject);
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
    else if (strMemberName == L"EdmAccuracyConstant")
    {
        if (pObject->hasValue_EdmAccuracyConstant())
        {
            strValue = (DoubleObjectImpl(pObject->getEdmAccuracyConstant())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EdmAccuracyppm")
    {
        if (pObject->hasValue_EdmAccuracyppm())
        {
            strValue = (DoubleObjectImpl(pObject->getEdmAccuracyppm())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"EdmVertOffset")
    {
        if (pObject->hasValue_EdmVertOffset())
        {
            strValue = (DoubleObjectImpl(pObject->getEdmVertOffset())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizAnglePrecision")
    {
        if (pObject->hasValue_HorizAnglePrecision())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizAnglePrecision())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Manufacturer")
    {
        if (pObject->hasValue_Manufacturer())
        {
            strValue = (StringObjectImpl(pObject->getManufacturer())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"Model")
    {
        if (pObject->hasValue_Model())
        {
            strValue = (StringObjectImpl(pObject->getModel())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SerialNumber")
    {
        if (pObject->hasValue_SerialNumber())
        {
            strValue = (StringObjectImpl(pObject->getSerialNumber())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"ZenithAnglePrecision")
    {
        if (pObject->hasValue_ZenithAnglePrecision())
        {
            strValue = (DoubleObjectImpl(pObject->getZenithAnglePrecision())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"CarrierWavelength")
    {
        if (pObject->hasValue_CarrierWavelength())
        {
            strValue = (DoubleObjectImpl(pObject->getCarrierWavelength())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"RefractiveIndex")
    {
        if (pObject->hasValue_RefractiveIndex())
        {
            strValue = (DoubleObjectImpl(pObject->getRefractiveIndex())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HorizCollimation")
    {
        if (pObject->hasValue_HorizCollimation())
        {
            strValue = (DoubleObjectImpl(pObject->getHorizCollimation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"VertCollimation")
    {
        if (pObject->hasValue_VertCollimation())
        {
            strValue = (DoubleObjectImpl(pObject->getVertCollimation())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"StadiaFactor")
    {
        if (pObject->hasValue_StadiaFactor())
        {
            strValue = (DoubleObjectImpl(pObject->getStadiaFactor())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String InstrumentDetailsNode::nodeName() const
{
    return L"InstrumentDetails";
}

StructFlowNode::StructFlowNode (Object* pObj)
    : ObjectNode (pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<StructFlow*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"StructFlowNode :: Invalid Object.");
    int nNumChildren = 10;
    m_arrChildren.reserve(nNumChildren);
    m_nNumChildren = 0;
    m_arrChildren.push_back(new FeatureCollectionNode(m_pLxObj->Feature()));
    m_arrChildren.push_back(new ValueNode(this, L"LossIn", L"LossIn"));
    m_arrChildren.push_back(new ValueNode(this, L"LossOut", L"LossOut"));
    m_arrChildren.push_back(new ValueNode(this, L"Desc", L"Desc"));
    m_arrChildren.push_back(new ValueNode(this, L"HglIn", L"HglIn"));
    m_arrChildren.push_back(new ValueNode(this, L"HglOut", L"HglOut"));
    m_arrChildren.push_back(new ValueNode(this, L"LocalDepression", L"LocalDepression"));
    m_arrChildren.push_back(new ValueNode(this, L"SlopeSurf", L"SlopeSurf"));
    m_arrChildren.push_back(new ValueNode(this, L"SlopeGutter", L"SlopeGutter"));
    m_arrChildren.push_back(new ValueNode(this, L"WidthGutter", L"WidthGutter"));
}

bool StructFlowNode::setValue (const String& strMemberName, const String* pstrValue)
{
    bool bValueSet = false;
    StructFlow* pObject = dynamic_cast<StructFlow*>(m_pObject);
    if (strMemberName == L"LossIn")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LossIn();
        }
        else
        {
            pObject->setLossIn(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LossOut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LossOut();
        }
        else
        {
            pObject->setLossOut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
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
    if (strMemberName == L"HglIn")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HglIn();
        }
        else
        {
            pObject->setHglIn(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"HglOut")
    {
        if (!pstrValue)
        {
            pObject->resetValue_HglOut();
        }
        else
        {
            pObject->setHglOut(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"LocalDepression")
    {
        if (!pstrValue)
        {
            pObject->resetValue_LocalDepression();
        }
        else
        {
            pObject->setLocalDepression(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SlopeSurf")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SlopeSurf();
        }
        else
        {
            pObject->setSlopeSurf(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"SlopeGutter")
    {
        if (!pstrValue)
        {
            pObject->resetValue_SlopeGutter();
        }
        else
        {
            pObject->setSlopeGutter(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    if (strMemberName == L"WidthGutter")
    {
        if (!pstrValue)
        {
            pObject->resetValue_WidthGutter();
        }
        else
        {
            pObject->setWidthGutter(DoubleObjectImpl::parseString(pstrValue->c_str(), pstrValue->length()));
            bValueSet = true;
        }
    }
    return bValueSet;
}

bool StructFlowNode::getValue (const String& strMemberName, String& strValue)
{
    bool bValueSet = false;
    StructFlow* pObject = dynamic_cast<StructFlow*>(m_pObject);
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
    else if (strMemberName == L"LossIn")
    {
        if (pObject->hasValue_LossIn())
        {
            strValue = (DoubleObjectImpl(pObject->getLossIn())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LossOut")
    {
        if (pObject->hasValue_LossOut())
        {
            strValue = (DoubleObjectImpl(pObject->getLossOut())).toString();
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
    else if (strMemberName == L"HglIn")
    {
        if (pObject->hasValue_HglIn())
        {
            strValue = (DoubleObjectImpl(pObject->getHglIn())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"HglOut")
    {
        if (pObject->hasValue_HglOut())
        {
            strValue = (DoubleObjectImpl(pObject->getHglOut())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"LocalDepression")
    {
        if (pObject->hasValue_LocalDepression())
        {
            strValue = (DoubleObjectImpl(pObject->getLocalDepression())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SlopeSurf")
    {
        if (pObject->hasValue_SlopeSurf())
        {
            strValue = (DoubleObjectImpl(pObject->getSlopeSurf())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"SlopeGutter")
    {
        if (pObject->hasValue_SlopeGutter())
        {
            strValue = (DoubleObjectImpl(pObject->getSlopeGutter())).toString();
            bValueSet = true;
        }
    }
    else if (strMemberName == L"WidthGutter")
    {
        if (pObject->hasValue_WidthGutter())
        {
            strValue = (DoubleObjectImpl(pObject->getWidthGutter())).toString();
            bValueSet = true;
        }
    }
    return bValueSet;
}

String StructFlowNode::nodeName() const
{
    return L"StructFlow";
}

NoPassingZoneCollectionNode::NoPassingZoneCollectionNode (Object& obj)
    : CollectionNode(&obj) 
{
    initialize(&obj);
}

NoPassingZoneCollectionNode::NoPassingZoneCollectionNode (Object* pObj)
    : CollectionNode (pObj) 
{
    initialize(pObj);
}

void NoPassingZoneCollectionNode::initialize (Object* pObj)
{
    ILxNode* pVariant = NULL;
    m_pLxObj = dynamic_cast<NoPassingZoneCollection*>(pObj);
    if (m_pLxObj == NULL)
        throw new Exception(Exception::Code::kFail, L"NoPassingZoneCollectionNode :: Invalid Object.");
    int nNumChildren = m_pLxObj->count();
    m_arrChildren.reserve(nNumChildren);
    NoPassingZoneCollectionIterator* pIterator = m_pLxObj->iterator();
    m_nNumChildren = 0;
    while (!pIterator->atEnd())
    {
        m_arrChildren.push_back(new NoPassingZoneNode(pIterator->current()));
        pIterator->next();
    }
    pIterator->release();
}

String NoPassingZoneCollectionNode::nodeName() const
{
    return L"NoPassingZoneCollection";
}

ILxNode* NoPassingZoneCollectionNode::findChild(const String& strChildId) const
{
    return NULL;
}
}; // namespace : LX
