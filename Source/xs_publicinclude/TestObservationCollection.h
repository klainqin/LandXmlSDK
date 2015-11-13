#if !defined(__TESTOBSERVATIONCOLLECTION_H)
#define __TESTOBSERVATIONCOLLECTION_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "lxtypes.h"
#include "TestObservation.h"
namespace LX
{

// Iterator : TestObservationCollection
class TestObservationCollectionIterator : public Iterator<TestObservation*>
{
};

class TestObservationCollectionConstIterator : public ConstIterator<TestObservation>
{
};

// Collection : TestObservationCollection
class TestObservationCollection : public ObjList<TestObservation, TestObservationCollectionIterator, TestObservationCollectionConstIterator>
{
};
}; // namespace : LX
#pragma warning(pop)
#endif
