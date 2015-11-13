#if !defined(__RAWOBSERVATIONIMPL_H)
#define __RAWOBSERVATIONIMPL_H

#include "RawObservationTmpl.h"
namespace LX
{


class RawObservationImpl : public RawObservationTmpl<RawObservation>
{
public:
    RawObservationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
