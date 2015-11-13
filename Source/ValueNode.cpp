
#include "stdafx.h"
#include "ValueNode.h"
#include "ObjectNode.h"

namespace LX
{

ValueNode::ValueNode (
	ILxNode* pParentNode, 
    String strMemberName, 
	String strNodeName)
	: m_pParentNode(pParentNode), 
	  m_strNodeName(strNodeName), 
      m_strMemberName(strMemberName)
{
}

ValueNode::~ValueNode ()
{
    m_pParentNode = NULL;
}

ILxNode* ValueNode::getChild (int nIndex) const
{
	return NULL;
}

String ValueNode::nodeName() const
{
	return m_strNodeName;
}

String ValueNode::getValue() const 
{
    ObjectNode* pObjNode = dynamic_cast<ObjectNode*>(m_pParentNode);
    String strValue(L""); 
    pObjNode->getValue(m_strMemberName, strValue);
    return strValue;
}

bool ValueNode::isCollection () const
{
	return false;
}

int ValueNode::numberChildren () const
{
	return 0;
}

bool ValueNode::isValueSet() const
{
    ObjectNode* pObjNode = dynamic_cast<ObjectNode*>(m_pParentNode);
    String strValue;

    if (pObjNode->getValue (m_strMemberName, strValue))
        return true;
	else
		return false;
}

bool ValueNode::hasValue() const
{
	return true;
}

ILxNode* ValueNode::findChild (const String& strName) const
{
    return NULL;
}

Object* ValueNode::getObject() const
{
	return NULL;
}

ILxNode* ValueNode::removeChild (int nIndex)
{
    return NULL;
}

bool ValueNode::setValue (const String* pstrValue)
{
    ObjectNode* pObjNode = dynamic_cast<ObjectNode*>(m_pParentNode);
    if (!pObjNode)
        return false;
    return pObjNode->setValue(m_strMemberName, pstrValue);
}

void ValueNode::release ()
{
    delete this;
}


}; // End LX namespace

