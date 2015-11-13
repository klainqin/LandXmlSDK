#if !defined(__TESTOBSERVATIONCOLLECTIONIMPL_H)
#define __TESTOBSERVATIONCOLLECTIONIMPL_H

#pragma warning(push)
#pragma warning(disable : 4786)
#include "TestObservation.h"
#include "TestObservationCollection.h"
#if !defined(__COLLECTION_CREATE_ONLY)

#include "LXTypesTmpl.h"
#include "TestObservationImpl.h"
#endif

namespace LX
{
TestObservationCollection* createTestObservationCollectionObject (DocumentImpl* pDocument);
#if !defined(__COLLECTION_CREATE_ONLY)
// Collection : TestObservationCollectionImpl
class TestObservationCollectionImpl : public ObjListTmpl<TestObservation, TestObservationCollection, TestObservationCollectionIterator, TestObservationCollectionConstIterator>
{
public:
    TestObservationCollectionImpl::TestObservationCollectionImpl (DocumentImpl* pDocument);
};
#endif
}; // namespace : LX
#pragma warning(pop)
#endif
