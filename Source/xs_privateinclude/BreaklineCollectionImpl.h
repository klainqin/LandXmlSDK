#if !defined(__BREAKLINECOLLECTIONIMPL_H)
#define __BREAKLINECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Breakline.h"
#include "BreaklineCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "BreaklineImpl.h"
#endif

namespace LX
{
BreaklineCollection* createBreaklineCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : BreaklineCollectionImpl
class BreaklineCollectionImpl : public NamedObjMultiMapTmpl<Breakline, BreaklineCollection, String, BreaklineCollectionIterator, BreaklineCollectionConstIterator>
{
public:
    BreaklineCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
