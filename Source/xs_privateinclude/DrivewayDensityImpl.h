#if !defined(__DRIVEWAYDENSITYIMPL_H)
#define __DRIVEWAYDENSITYIMPL_H

#include "DrivewayDensityTmpl.h"
namespace LX
{


class DrivewayDensityImpl : public DrivewayDensityTmpl<DrivewayDensity>
{
public:
    DrivewayDensityImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
