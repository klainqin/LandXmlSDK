#if !defined(__ROADSIDEIMPL_H)
#define __ROADSIDEIMPL_H

#include "RoadsideTmpl.h"
namespace LX
{


class RoadsideImpl : public RoadsideTmpl<Roadside>
{
public:
    RoadsideImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
