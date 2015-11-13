#if !defined(__BOUNDARIESIMPL_H)
#define __BOUNDARIESIMPL_H

#include "BoundariesTmpl.h"
namespace LX
{


class BoundariesImpl : public BoundariesTmpl<Boundaries>
{
public:
    BoundariesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
