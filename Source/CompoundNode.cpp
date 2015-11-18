
#include "stdafx.h"
#include "CompoundNode.h"

namespace LX
{

CompoundNode::CompoundNode ()
{
}

CompoundNode::~CompoundNode ()
{
	// Iterate through the children and delete them.
	for (unsigned int i = 0; i < m_arrChildren.size(); i++)
	{
        if (m_arrChildren[i])
        {
            m_arrChildren[i]->release();
            m_arrChildren[i]=NULL;
        }
	}

    m_arrChildren.clear ();
}

ILxNode* CompoundNode::getChild (int nIndex) const
{
    if ((unsigned int)nIndex > m_arrChildren.size())
        return NULL;
	return m_arrChildren[nIndex];
}

int CompoundNode::numberChildren () const
{
	return (int)m_arrChildren.size();
}

ILxNode* CompoundNode::removeChild (int nIndex)
{
    return NULL;
}

String CompoundNode::getValue() const 
{
    return L"";
}

bool CompoundNode::setValue (const String* pstrValue)
{
    return false;
}

void CompoundNode::release ()
{
    delete this;
}

}; // End namespace LX

