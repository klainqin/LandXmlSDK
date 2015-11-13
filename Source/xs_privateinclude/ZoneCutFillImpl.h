#if !defined(__ZONECUTFILLIMPL_H)
#define __ZONECUTFILLIMPL_H

#include "ZoneCutFillTmpl.h"
namespace LX
{


class ZoneCutFillImpl : public ZoneCutFillTmpl<ZoneCutFill>
{
public:
    ZoneCutFillImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
