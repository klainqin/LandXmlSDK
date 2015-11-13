#if !defined(__ZONESIMPL_H)
#define __ZONESIMPL_H

#include "ZonesTmpl.h"
namespace LX
{


class ZonesImpl : public ZonesTmpl<Zones>
{
public:
    ZonesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
