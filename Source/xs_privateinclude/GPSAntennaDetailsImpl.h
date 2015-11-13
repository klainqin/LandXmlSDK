#if !defined(__GPSANTENNADETAILSIMPL_H)
#define __GPSANTENNADETAILSIMPL_H

#include "GPSAntennaDetailsTmpl.h"
namespace LX
{


class GPSAntennaDetailsImpl : public GPSAntennaDetailsTmpl<GPSAntennaDetails>
{
public:
    GPSAntennaDetailsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
