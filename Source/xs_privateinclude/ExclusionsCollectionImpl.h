#if !defined(__EXCLUSIONSCOLLECTIONIMPL_H)
#define __EXCLUSIONSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Exclusions.h"
#include "ExclusionsCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ExclusionsImpl.h"
#endif

namespace LX
{
ExclusionsCollection* createExclusionsCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ExclusionsCollectionImpl
class ExclusionsCollectionImpl : public ObjListTmpl<Exclusions, ExclusionsCollection, ExclusionsCollectionIterator, ExclusionsCollectionConstIterator>
{
public:
    ExclusionsCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
