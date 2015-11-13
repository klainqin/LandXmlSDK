#if !defined(__VOLUMEIMPL_H)
#define __VOLUMEIMPL_H

#include "VolumeTmpl.h"
namespace LX
{


class VolumeImpl : public VolumeTmpl<Volume>
{
public:
    VolumeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
