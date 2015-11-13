#if !defined(__ZONESLOPEIMPL_H)
#define __ZONESLOPEIMPL_H

#include "ZoneSlopeTmpl.h"
namespace LX
{


class ZoneSlopeImpl : public ZoneSlopeTmpl<ZoneSlope>
{
public:
    ZoneSlopeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
