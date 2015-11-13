#if !defined(__TWOWAYLEFTTURNLANEIMPL_H)
#define __TWOWAYLEFTTURNLANEIMPL_H

#include "TwoWayLeftTurnLaneTmpl.h"
namespace LX
{


class TwoWayLeftTurnLaneImpl : public TwoWayLeftTurnLaneTmpl<TwoWayLeftTurnLane>
{
public:
    TwoWayLeftTurnLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
