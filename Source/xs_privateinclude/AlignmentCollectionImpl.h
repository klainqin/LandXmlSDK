#if !defined(__ALIGNMENTCOLLECTIONIMPL_H)
#define __ALIGNMENTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Alignment.h"
#include "AlignmentCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AlignmentImpl.h"
#endif

namespace LX
{
AlignmentCollection* createAlignmentCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AlignmentCollectionImpl
class AlignmentCollectionImpl : public GlobalObjMapTmpl<Alignment, AlignmentCollection, String, AlignmentCollectionIterator, AlignmentCollectionConstIterator>
{
public:
    AlignmentCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
