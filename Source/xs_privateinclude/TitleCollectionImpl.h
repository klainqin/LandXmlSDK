#if !defined(__TITLECOLLECTIONIMPL_H)
#define __TITLECOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "Title.h"
#include "TitleCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TitleImpl.h"
#endif

namespace LX
{
TitleCollection* createTitleCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TitleCollectionImpl
class TitleCollectionImpl : public NamedObjMultiMapTmpl<Title, TitleCollection, String, TitleCollectionIterator, TitleCollectionConstIterator>
{
public:
    TitleCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
