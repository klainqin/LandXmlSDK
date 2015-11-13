#if !defined(__LXCOLLECTIONNODE_H)
#define __LXCOLLECTIONNODE_H

#include "ILxNode.h"
#include "CompoundNode.h"

namespace LX
{
class CollectionNode : public CompoundNode
{
public:
	CollectionNode (Object& pLxObj);

	CollectionNode (Object* pLxObj);

	virtual String nodeName() const;

	virtual bool hasValue() const;

	virtual bool isValueSet() const;

	virtual String getValue() const;

	virtual bool isCollection () const;

    virtual ILxNode* findChild (const String& strObjectId) const;

    virtual Object* getObject () const;

    virtual ILxNode* removeChild (int nIndex);


protected:
	void initialize (LX::Object* pLxObj);
};
}; // End LX namespace.

#endif