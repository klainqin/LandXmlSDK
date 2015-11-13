#if !defined(__ZONEIMPL_H)
#define __ZONEIMPL_H

#include "ZoneTmpl.h"
namespace LX
{


class ZoneImpl : public ZoneTmpl<Zone>
{
public:
    ZoneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
