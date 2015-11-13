#if !defined(__ZONEHINGEIMPL_H)
#define __ZONEHINGEIMPL_H

#include "ZoneHingeTmpl.h"
namespace LX
{


class ZoneHingeImpl : public ZoneHingeTmpl<ZoneHinge>
{
public:
    ZoneHingeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
