#if !defined(__ROADWAYIMPL_H)
#define __ROADWAYIMPL_H

#include "RoadwayTmpl.h"
#include "RoadwayCollection.h"
namespace LX
{


class RoadwayImpl : public RoadwayTmpl<Roadway>
{
public:
    RoadwayImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
