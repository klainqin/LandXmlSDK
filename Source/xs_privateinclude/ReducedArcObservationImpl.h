#if !defined(__REDUCEDARCOBSERVATIONIMPL_H)
#define __REDUCEDARCOBSERVATIONIMPL_H

#include "ReducedArcObservationTmpl.h"
namespace LX
{


class ReducedArcObservationImpl : public ReducedArcObservationTmpl<ReducedArcObservation>
{
public:
    ReducedArcObservationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
