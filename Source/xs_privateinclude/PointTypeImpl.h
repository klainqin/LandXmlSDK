#if !defined(__POINTTYPEIMPL_H)
#define __POINTTYPEIMPL_H

#include "PointTypeTmpl.h"
namespace LX
{


class PointTypeImpl : public PointTypeTmpl<PointType>
{
public:
    PointTypeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
