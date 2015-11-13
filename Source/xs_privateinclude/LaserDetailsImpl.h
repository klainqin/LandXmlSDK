#if !defined(__LASERDETAILSIMPL_H)
#define __LASERDETAILSIMPL_H

#include "LaserDetailsTmpl.h"
namespace LX
{


class LaserDetailsImpl : public LaserDetailsTmpl<LaserDetails>
{
public:
    LaserDetailsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
