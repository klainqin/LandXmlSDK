#if !defined(__TRAFFICCONTROLIMPL_H)
#define __TRAFFICCONTROLIMPL_H

#include "TrafficControlTmpl.h"
namespace LX
{


class TrafficControlImpl : public TrafficControlTmpl<TrafficControl>
{
public:
    TrafficControlImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
