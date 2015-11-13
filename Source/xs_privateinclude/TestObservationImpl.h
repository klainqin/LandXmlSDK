#if !defined(__TESTOBSERVATIONIMPL_H)
#define __TESTOBSERVATIONIMPL_H

#include "TestObservationTmpl.h"
namespace LX
{


class TestObservationImpl : public TestObservationTmpl<TestObservation>
{
public:
    TestObservationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
