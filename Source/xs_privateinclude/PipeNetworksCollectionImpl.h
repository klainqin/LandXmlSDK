#if !defined(__PIPENETWORKSCOLLECTIONIMPL_H)
#define __PIPENETWORKSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "PipeNetworks.h"
#include "PipeNetworksCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PipeNetworksImpl.h"
#endif

namespace LX
{
PipeNetworksCollection* createPipeNetworksCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PipeNetworksCollectionImpl
class PipeNetworksCollectionImpl : public NamedObjMultiMapTmpl<PipeNetworks, PipeNetworksCollection, String, PipeNetworksCollectionIterator, PipeNetworksCollectionConstIterator>
{
public:
    PipeNetworksCollectionImpl::PipeNetworksCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
