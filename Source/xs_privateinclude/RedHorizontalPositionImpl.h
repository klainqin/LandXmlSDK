#if !defined(__REDHORIZONTALPOSITIONIMPL_H)
#define __REDHORIZONTALPOSITIONIMPL_H

#include "RedHorizontalPositionTmpl.h"
namespace LX
{


class RedHorizontalPositionImpl : public RedHorizontalPositionTmpl<RedHorizontalPosition>
{
public:
    RedHorizontalPositionImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
