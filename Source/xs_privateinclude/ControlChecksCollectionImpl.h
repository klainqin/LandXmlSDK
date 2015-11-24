#if !defined(__CONTROLCHECKSCOLLECTIONIMPL_H)
#define __CONTROLCHECKSCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "ControlChecks.h"
#include "ControlChecksCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "ControlChecksImpl.h"
#endif

namespace LX
{
ControlChecksCollection* createControlChecksCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : ControlChecksCollectionImpl
class ControlChecksCollectionImpl : public ObjListTmpl<ControlChecks, ControlChecksCollection, ControlChecksCollectionIterator, ControlChecksCollectionConstIterator>
{
public:
    ControlChecksCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
