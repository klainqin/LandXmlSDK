#if !defined(__PROFALIGNCOLLECTIONIMPL_H)
#define __PROFALIGNCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ProfAlign.h"
#include "ProfAlignCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ProfAlignImpl.h"
#endif

namespace LX
{
ProfAlignCollection* createProfAlignCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ProfAlignCollectionImpl
class ProfAlignCollectionImpl : public NamedObjMultiMapTmpl<ProfAlign, ProfAlignCollection, String, ProfAlignCollectionIterator, ProfAlignCollectionConstIterator>
{
public:
    ProfAlignCollectionImpl::ProfAlignCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
