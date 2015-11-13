
#include "stdafx.h"
#include "ObjectNode.h"

namespace LX
{

ObjectNode::ObjectNode (
	Object* pLxObj)
{
	m_pObject = pLxObj;
}

String ObjectNode::nodeName() const 
{
	return L"";
}

bool ObjectNode::isCollection () const
{
	return false;
}

bool ObjectNode::isValueSet() const
{
	ValueObject* pVal = dynamic_cast<ValueObject*>(m_pObject);
	
	if (pVal)
		return !pVal->isNothing();
	else
		return false;
}

bool ObjectNode::hasValue() const
{
	LX::ValueObject* pVal = dynamic_cast<LX::ValueObject*>(m_pObject);
	if (pVal)
		return true;
	else
		return false;
}


ILxNode* ObjectNode::findChild (const String& strChildName) const
{
    return NULL;
}


Object* ObjectNode::getObject () const
{
    return m_pObject;
}

String ObjectNode::getValue() const 
{
	LX::ValueObject* pVal = dynamic_cast<LX::ValueObject*>(m_pObject);
	if (pVal)
		return pVal->toString();
	else
        return L"";
}

bool ObjectNode::getValue (const String& strName, String& strValue)
{
    return false;
}

bool ObjectNode::setValue (const String& strName, const String* pstrValue)
{
    return false;
}




}; // End namespace LX


