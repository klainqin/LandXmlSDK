#if !defined(__FEATUREDICTIONARYCOLLECTIONIMPL_H)
#define __FEATUREDICTIONARYCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "FeatureDictionary.h"
#include "FeatureDictionaryCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "FeatureDictionaryImpl.h"
#endif

namespace LX
{
FeatureDictionaryCollection* createFeatureDictionaryCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : FeatureDictionaryCollectionImpl
class FeatureDictionaryCollectionImpl : public NamedObjMultiMapTmpl<FeatureDictionary, FeatureDictionaryCollection, String, FeatureDictionaryCollectionIterator, FeatureDictionaryCollectionConstIterator>
{
public:
    FeatureDictionaryCollectionImpl::FeatureDictionaryCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
