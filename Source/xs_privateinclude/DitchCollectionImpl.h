#if !defined(__DITCHCOLLECTIONIMPL_H)
#define __DITCHCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Ditch.h"
#include "DitchCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DitchImpl.h"
#endif

namespace LX
{
DitchCollection* createDitchCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DitchCollectionImpl
class DitchCollectionImpl : public ObjListTmpl<Ditch, DitchCollection, DitchCollectionIterator, DitchCollectionConstIterator>
{
public:
    DitchCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
