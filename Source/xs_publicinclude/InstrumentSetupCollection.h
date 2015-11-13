#if !defined(__INSTRUMENTSETUPCOLLECTION_H)
#define __INSTRUMENTSETUPCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "InstrumentSetup.h"
namespace LX
{

// Iterator : InstrumentSetupCollection
class InstrumentSetupCollectionIterator : public Iterator<InstrumentSetup*>
{
};

class InstrumentSetupCollectionConstIterator : public ConstIterator<InstrumentSetup>
{
};

// Collection : InstrumentSetupCollection
class InstrumentSetupCollection : public ObjList<InstrumentSetup, InstrumentSetupCollectionIterator, InstrumentSetupCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
