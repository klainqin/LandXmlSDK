#if !defined(__FEATUREDICTIONARYCOLLECTION_H)
#define __FEATUREDICTIONARYCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "FeatureDictionary.h"
namespace LX
{

// Iterator : FeatureDictionaryCollection
class FeatureDictionaryCollectionIterator : public Iterator<FeatureDictionary*>
{
};

class FeatureDictionaryCollectionConstIterator : public ConstIterator<FeatureDictionary>
{
};

// Collection : FeatureDictionaryCollection
class FeatureDictionaryCollection : public Map<FeatureDictionary, String, FeatureDictionaryCollectionIterator, FeatureDictionaryCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
