#if !defined(__PIPENETWORKCOLLECTIONIMPL_H)
#define __PIPENETWORKCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PipeNetwork.h"
#include "PipeNetworkCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PipeNetworkImpl.h"
#endif

namespace LX
{
PipeNetworkCollection* createPipeNetworkCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PipeNetworkCollectionImpl
class PipeNetworkCollectionImpl : public GlobalObjMapTmpl<PipeNetwork, PipeNetworkCollection, String, PipeNetworkCollectionIterator, PipeNetworkCollectionConstIterator>
{
public:
    PipeNetworkCollectionImpl::PipeNetworkCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
