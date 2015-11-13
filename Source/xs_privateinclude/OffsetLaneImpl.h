#if !defined(__OFFSETLANEIMPL_H)
#define __OFFSETLANEIMPL_H

#include "OffsetLaneTmpl.h"
namespace LX
{


class OffsetLaneImpl : public OffsetLaneTmpl<OffsetLane>
{
public:
    OffsetLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
