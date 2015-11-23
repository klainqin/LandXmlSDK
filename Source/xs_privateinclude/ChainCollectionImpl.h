#if !defined(__CHAINCOLLECTIONIMPL_H)
#define __CHAINCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Chain.h"
#include "ChainCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ChainImpl.h"
#endif

namespace LX
{
ChainCollection* createChainCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ChainCollectionImpl
class ChainCollectionImpl : public NamedObjMultiMapTmpl<Chain, ChainCollection, String, ChainCollectionIterator, ChainCollectionConstIterator>
{
public:
    ChainCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
