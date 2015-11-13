#if !defined(__CONTROLCHECKSCOLLECTION_H)
#define __CONTROLCHECKSCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "ControlChecks.h"
namespace LX
{

// Iterator : ControlChecksCollection
class ControlChecksCollectionIterator : public Iterator<ControlChecks*>
{
};

class ControlChecksCollectionConstIterator : public ConstIterator<ControlChecks>
{
};

// Collection : ControlChecksCollection
class ControlChecksCollection : public ObjList<ControlChecks, ControlChecksCollectionIterator, ControlChecksCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
