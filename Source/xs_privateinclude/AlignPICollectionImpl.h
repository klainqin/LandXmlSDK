#if !defined(__ALIGNPICOLLECTIONIMPL_H)
#define __ALIGNPICOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "AlignPI.h"
#include "AlignPICollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "AlignPIImpl.h"
#endif

namespace LX
{
AlignPICollection* createAlignPICollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : AlignPICollectionImpl
class AlignPICollectionImpl : public ObjListTmpl<AlignPI, AlignPICollection, AlignPICollectionIterator, AlignPICollectionConstIterator>
{
public:
    AlignPICollectionImpl::AlignPICollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
