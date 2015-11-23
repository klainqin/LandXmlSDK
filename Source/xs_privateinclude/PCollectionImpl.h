#if !defined(__PCOLLECTIONIMPL_H)
#define __PCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "P.h"
#include "PCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PImpl.h"
#endif

namespace LX
{
PCollection* createPCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PCollectionImpl
class PCollectionImpl : public CollectableObjMapTmpl<P, PCollection, unsigned int, PCollectionIterator, PCollectionConstIterator>
{
public:
    PCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
