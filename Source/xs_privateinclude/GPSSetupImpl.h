#if !defined(__GPSSETUPIMPL_H)
#define __GPSSETUPIMPL_H

#include "GPSSetupTmpl.h"
namespace LX
{


class GPSSetupImpl : public GPSSetupTmpl<GPSSetup>
{
public:
    GPSSetupImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
