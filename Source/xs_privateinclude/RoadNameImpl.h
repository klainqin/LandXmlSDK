#if !defined(__ROADNAMEIMPL_H)
#define __ROADNAMEIMPL_H

#include "RoadNameTmpl.h"
namespace LX
{


class RoadNameImpl : public RoadNameTmpl<RoadName>
{
public:
    RoadNameImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
