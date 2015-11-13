#if !defined(__LXCOMPOUNDNODE_H)
#define __LXCOMPOUNDNODE_H

#include "ILxNode.h"
#include <vector>

namespace LX
{
class CompoundNode : public ILxNode
{
public:
	CompoundNode ();

	virtual ~CompoundNode ();

	virtual ILxNode* getChild (int nIndex) const;

	virtual int numberChildren () const;

    virtual ILxNode* removeChild (int nIndex);

    virtual bool setValue (const String* pstrValue);

    String getValue() const ;

    virtual void release ();

protected:
	int m_nNumChildren;
    std::vector<ILxNode*> m_arrChildren;

};
}; // End LX namespace.

#endif