#if !defined(__VOLUMEGEOMIMPL_H)
#define __VOLUMEGEOMIMPL_H

#include "VolumeGeomTmpl.h"
namespace LX
{


class VolumeGeomImpl : public VolumeGeomTmpl<VolumeGeom>
{
public:
    VolumeGeomImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
