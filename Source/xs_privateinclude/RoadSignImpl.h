#if !defined(__ROADSIGNIMPL_H)
#define __ROADSIGNIMPL_H

#include "RoadSignTmpl.h"
namespace LX
{


class RoadSignImpl : public RoadSignTmpl<RoadSign>
{
public:
    RoadSignImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
