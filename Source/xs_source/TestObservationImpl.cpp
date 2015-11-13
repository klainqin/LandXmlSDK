
#if !defined(__COLLECTION_CREATE_ONLY)
#define __COLLECTION_CREATE_ONLY
#endif

#include "stdafx.h"
#include "LXTypes.h"
#include "TestObservation.h"
#include "LXTypesTmpl.h"
#include "RawObservationTypeImpl.h"

#include "LXTypesImpl.h"
#include "TestObservationTmpl.inl"
namespace LX
{
template class TestObservationTmpl<TestObservation>;
TestObservationImpl::TestObservationImpl (DocumentImpl* pDoc)
    : TestObservationTmpl<TestObservation>(pDoc)
{
}
}; // namespace : LX
