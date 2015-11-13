#if !defined(__TRAFFICVOLUMEIMPL_H)
#define __TRAFFICVOLUMEIMPL_H

#include "TrafficVolumeTmpl.h"
namespace LX
{


class TrafficVolumeImpl : public TrafficVolumeTmpl<TrafficVolume>
{
public:
    TrafficVolumeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
