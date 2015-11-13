#if !defined(__SPEEDSTATIONIMPL_H)
#define __SPEEDSTATIONIMPL_H

#include "SpeedStationTmpl.h"
namespace LX
{


class SpeedStationImpl : public SpeedStationTmpl<SpeedStation>
{
public:
    SpeedStationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
