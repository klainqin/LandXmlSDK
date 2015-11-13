#if !defined(__REDUCEDOBSERVATIONIMPL_H)
#define __REDUCEDOBSERVATIONIMPL_H

#include "ReducedObservationTmpl.h"
namespace LX
{


class ReducedObservationImpl : public ReducedObservationTmpl<ReducedObservation>
{
public:
    ReducedObservationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
