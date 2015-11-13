#if !defined(__ZONEWIDTHIMPL_H)
#define __ZONEWIDTHIMPL_H

#include "ZoneWidthTmpl.h"
namespace LX
{


class ZoneWidthImpl : public ZoneWidthTmpl<ZoneWidth>
{
public:
    ZoneWidthImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
