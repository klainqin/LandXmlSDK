#if !defined(__LXOBJECTNODE_H)
#define __LXOBJECTNODE_H

#include "ILxNode.h"
#include "CompoundNode.h"


namespace LX
{

class ObjectNode : public CompoundNode
{
public:
	ObjectNode (Object* pLxObj);

	virtual String nodeName() const;

	virtual bool hasValue() const;

	virtual bool isValueSet() const;

	bool isCollection () const;

    virtual ILxNode* findChild (const String& strObjectId) const;

    virtual Object* getObject () const;

    virtual bool setValue (const String& strName, const String* pstrValue);

    virtual bool getValue (const String& strName, String& strValue);

    virtual String getValue() const;


 
protected:
	Object* m_pObject;
};
}; // End namespace LX

#endif

