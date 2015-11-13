#if !defined(__LXVALUENODE_H)
#define __LXVALUENODE_H

#include "ILxNode.h"

namespace LX
{
class ValueNode : public ILxNode
{
public:
	ValueNode (
		ILxNode* pParentNode,
        LX::String strMemberName, 
		String strNodeName);

	virtual ~ValueNode ();

	virtual ILxNode* getChild (int nIndex) const;

	virtual String nodeName() const;

	virtual bool hasValue() const;

	virtual bool isValueSet() const;

	virtual String getValue() const; 

	virtual bool isCollection () const;

	virtual int numberChildren () const;

    virtual ILxNode* findChild (const String& strObjectId) const;

    virtual Object* getObject () const;

    virtual ILxNode* removeChild (int nIndex);

    virtual bool setValue (const String* pstrValue);

    virtual void release ();


private:
	ILxNode* m_pParentNode;
	String m_strNodeName;
    String m_strMemberName;
};
}; // End LX namespace
#endif

