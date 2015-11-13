#if !defined(__PROFALIGNCOLLECTION_H)
#define __PROFALIGNCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ProfAlign.h"
namespace LX
{

// Iterator : ProfAlignCollection
class ProfAlignCollectionIterator : public Iterator<ProfAlign*>
{
};

class ProfAlignCollectionConstIterator : public ConstIterator<ProfAlign>
{
};

// Collection : ProfAlignCollection
class ProfAlignCollection : public Map<ProfAlign, String, ProfAlignCollectionIterator, ProfAlignCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
