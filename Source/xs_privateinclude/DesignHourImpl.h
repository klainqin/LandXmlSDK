#if !defined(__DESIGNHOURIMPL_H)
#define __DESIGNHOURIMPL_H

#include "DesignHourTmpl.h"
namespace LX
{


class DesignHourImpl : public DesignHourTmpl<DesignHour>
{
public:
    DesignHourImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
