
#include "stdafx.h"
#include "CollectionNode.h"

namespace LX
{

CollectionNode::CollectionNode (
	LX::Object& pLxObj)
{
}

CollectionNode::CollectionNode (
	LX::Object* pLxObj)
{
}

String CollectionNode::nodeName() const
{
	return L"Collection";
}

String CollectionNode::getValue() const 
{
	return L"";
}

bool CollectionNode::isCollection () const
{
	return true;
}

bool CollectionNode::isValueSet() const
{
	return false;
}

bool CollectionNode::hasValue() const
{
	return false;
}


ILxNode* CollectionNode::findChild (const String& strChildName) const
{
    return NULL;
}

Object* CollectionNode::getObject () const
{
    return NULL;
}

ILxNode* CollectionNode::removeChild (int nIndex)
{
    if ((unsigned int)nIndex >= m_arrChildren.size())
        return NULL;

    ILxNode* pNode = m_arrChildren[nIndex];
    std::vector<ILxNode*>::iterator iter = m_arrChildren.begin();
//    std::advance(iter, nIndex);
    m_arrChildren.erase(iter);

    return pNode;
}



}; // End namespace LX

