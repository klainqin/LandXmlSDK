#if !defined(__INVERTCOLLECTIONIMPL_H)
#define __INVERTCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Invert.h"
#include "InvertCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "InvertImpl.h"
#endif

namespace LX
{
InvertCollection* createInvertCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : InvertCollectionImpl
class InvertCollectionImpl : public ObjListTmpl<Invert, InvertCollection, InvertCollectionIterator, InvertCollectionConstIterator>
{
public:
    InvertCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
