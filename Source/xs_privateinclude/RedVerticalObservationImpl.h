#if !defined(__REDVERTICALOBSERVATIONIMPL_H)
#define __REDVERTICALOBSERVATIONIMPL_H

#include "RedVerticalObservationTmpl.h"
namespace LX
{


class RedVerticalObservationImpl : public RedVerticalObservationTmpl<RedVerticalObservation>
{
public:
    RedVerticalObservationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
