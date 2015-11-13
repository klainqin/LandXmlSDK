#if !defined(__SURFVOLUMEIMPL_H)
#define __SURFVOLUMEIMPL_H

#include "SurfVolumeTmpl.h"
namespace LX
{


class SurfVolumeImpl : public SurfVolumeTmpl<SurfVolume>
{
public:
    SurfVolumeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
