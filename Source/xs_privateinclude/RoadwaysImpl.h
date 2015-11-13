#if !defined(__ROADWAYSIMPL_H)
#define __ROADWAYSIMPL_H

#include "RoadwaysTmpl.h"
namespace LX
{


class RoadwaysImpl : public RoadwaysTmpl<Roadways>
{
public:
    RoadwaysImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
