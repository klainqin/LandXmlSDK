#if !defined(__OBSTRUCTIONOFFSETCOLLECTIONIMPL_H)
#define __OBSTRUCTIONOFFSETCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ObstructionOffset.h"
#include "ObstructionOffsetCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ObstructionOffsetImpl.h"
#endif

namespace LX
{
ObstructionOffsetCollection* createObstructionOffsetCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ObstructionOffsetCollectionImpl
class ObstructionOffsetCollectionImpl : public ObjListTmpl<ObstructionOffset, ObstructionOffsetCollection, ObstructionOffsetCollectionIterator, ObstructionOffsetCollectionConstIterator>
{
public:
    ObstructionOffsetCollectionImpl::ObstructionOffsetCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
