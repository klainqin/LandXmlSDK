#if !defined(__MAPPOINTIMPL_H)
#define __MAPPOINTIMPL_H

#include "MapPointTmpl.h"
namespace LX
{


class MapPointImpl : public MapPointTmpl<MapPoint>
{
public:
    MapPointImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
