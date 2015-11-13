#if !defined(__ALIGNMENTSCOLLECTIONIMPL_H)
#define __ALIGNMENTSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Alignments.h"
#include "AlignmentsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AlignmentsImpl.h"
#endif

namespace LX
{
AlignmentsCollection* createAlignmentsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AlignmentsCollectionImpl
class AlignmentsCollectionImpl : public NamedObjMultiMapTmpl<Alignments, AlignmentsCollection, String, AlignmentsCollectionIterator, AlignmentsCollectionConstIterator>
{
public:
    AlignmentsCollectionImpl::AlignmentsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
