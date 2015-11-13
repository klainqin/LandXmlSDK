#if !defined(__GPSPOSITIONIMPL_H)
#define __GPSPOSITIONIMPL_H

#include "GPSPositionTmpl.h"
namespace LX
{


class GPSPositionImpl : public GPSPositionTmpl<GPSPosition>
{
public:
    GPSPositionImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
