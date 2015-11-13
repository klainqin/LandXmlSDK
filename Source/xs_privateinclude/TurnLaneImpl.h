#if !defined(__TURNLANEIMPL_H)
#define __TURNLANEIMPL_H

#include "TurnLaneTmpl.h"
namespace LX
{


class TurnLaneImpl : public TurnLaneTmpl<TurnLane>
{
public:
    TurnLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
