#if !defined(__LXCOMPOUNDNODE_H)
#define __LXCOMPOUNDNODE_H

#include "ILxNode.h"

namespace LX
{
class CompoundNode : public ILxNode
{
public:
	CompoundNode (Object* pLxObj);

	~CompoundNode ();

	ILxNode** getChildren () const;

	int numberChildren () const;

 
protected:
	int m_nNumChildren;
	ILxNode** m_arrChildren;
};
}; // End namespace LX

#endif
