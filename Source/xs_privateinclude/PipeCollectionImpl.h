#if !defined(__PIPECOLLECTIONIMPL_H)
#define __PIPECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Pipe.h"
#include "PipeCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "PipeImpl.h"
#endif

namespace LX
{
PipeCollection* createPipeCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : PipeCollectionImpl
class PipeCollectionImpl : public GlobalObjMapTmpl<Pipe, PipeCollection, String, PipeCollectionIterator, PipeCollectionConstIterator>
{
public:
    PipeCollectionImpl::PipeCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
