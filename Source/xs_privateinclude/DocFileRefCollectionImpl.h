#if !defined(__DOCFILEREFCOLLECTIONIMPL_H)
#define __DOCFILEREFCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "DocFileRef.h"
#include "DocFileRefCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "DocFileRefImpl.h"
#endif

namespace LX
{
DocFileRefCollection* createDocFileRefCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : DocFileRefCollectionImpl
class DocFileRefCollectionImpl : public NamedObjMultiMapTmpl<DocFileRef, DocFileRefCollection, String, DocFileRefCollectionIterator, DocFileRefCollectionConstIterator>
{
public:
    DocFileRefCollectionImpl::DocFileRefCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
