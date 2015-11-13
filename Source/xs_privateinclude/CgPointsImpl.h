#if !defined(__CGPOINTSIMPL_H)
#define __CGPOINTSIMPL_H

#include "CgPointsTmpl.h"
namespace LX
{


class CgPointsImpl : public CgPointsTmpl<CgPoints>
{
public:
    CgPointsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
