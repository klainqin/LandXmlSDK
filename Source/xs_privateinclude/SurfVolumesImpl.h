#if !defined(__SURFVOLUMESIMPL_H)
#define __SURFVOLUMESIMPL_H

#include "SurfVolumesTmpl.h"
namespace LX
{


class SurfVolumesImpl : public SurfVolumesTmpl<SurfVolumes>
{
public:
    SurfVolumesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
