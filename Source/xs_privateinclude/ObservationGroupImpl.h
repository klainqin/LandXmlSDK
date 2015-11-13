#if !defined(__OBSERVATIONGROUPIMPL_H)
#define __OBSERVATIONGROUPIMPL_H

#include "ObservationGroupTmpl.h"
namespace LX
{


class ObservationGroupImpl : public ObservationGroupTmpl<ObservationGroup>
{
public:
    ObservationGroupImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
