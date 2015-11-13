#if !defined(__RAWOBSERVATIONTYPEIMPL_H)
#define __RAWOBSERVATIONTYPEIMPL_H

#include "RawObservationTypeTmpl.h"
namespace LX
{


class RawObservationTypeImpl : public RawObservationTypeTmpl<RawObservationType>
{
public:
    RawObservationTypeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
