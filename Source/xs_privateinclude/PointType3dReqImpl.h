#if !defined(__POINTTYPE3DREQIMPL_H)
#define __POINTTYPE3DREQIMPL_H

#include "PointType3dReqTmpl.h"
namespace LX
{


class PointType3dReqImpl : public PointType3dReqTmpl<PointType3dReq>
{
public:
    PointType3dReqImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
