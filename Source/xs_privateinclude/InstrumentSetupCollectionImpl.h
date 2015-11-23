#if !defined(__INSTRUMENTSETUPCOLLECTIONIMPL_H)
#define __INSTRUMENTSETUPCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "InstrumentSetup.h"
#include "InstrumentSetupCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "InstrumentSetupImpl.h"
#endif

namespace LX
{
InstrumentSetupCollection* createInstrumentSetupCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : InstrumentSetupCollectionImpl
class InstrumentSetupCollectionImpl : public ObjListTmpl<InstrumentSetup, InstrumentSetupCollection, InstrumentSetupCollectionIterator, InstrumentSetupCollectionConstIterator>
{
public:
    InstrumentSetupCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
