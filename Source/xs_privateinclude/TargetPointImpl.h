#if !defined(__TARGETPOINTIMPL_H)
#define __TARGETPOINTIMPL_H

#include "TargetPointTmpl.h"
namespace LX
{


class TargetPointImpl : public TargetPointTmpl<TargetPoint>
{
public:
    TargetPointImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
