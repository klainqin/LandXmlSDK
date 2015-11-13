#if !defined(__CLIMBLANEIMPL_H)
#define __CLIMBLANEIMPL_H

#include "ClimbLaneTmpl.h"
namespace LX
{


class ClimbLaneImpl : public ClimbLaneTmpl<ClimbLane>
{
public:
    ClimbLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
