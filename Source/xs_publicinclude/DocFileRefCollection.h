#if !defined(__DOCFILEREFCOLLECTION_H)
#define __DOCFILEREFCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "DocFileRef.h"
namespace LX
{

// Iterator : DocFileRefCollection
class DocFileRefCollectionIterator : public Iterator<DocFileRef*>
{
};

class DocFileRefCollectionConstIterator : public ConstIterator<DocFileRef>
{
};

// Collection : DocFileRefCollection
class DocFileRefCollection : public Map<DocFileRef, String, DocFileRefCollectionIterator, DocFileRefCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
