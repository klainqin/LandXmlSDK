#if !defined(__DAILYTRAFFICVOLUMEIMPL_H)
#define __DAILYTRAFFICVOLUMEIMPL_H

#include "DailyTrafficVolumeTmpl.h"
namespace LX
{


class DailyTrafficVolumeImpl : public DailyTrafficVolumeTmpl<DailyTrafficVolume>
{
public:
    DailyTrafficVolumeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
