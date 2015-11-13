#if !defined(__BOUNDARYIMPL_H)
#define __BOUNDARYIMPL_H

#include "BoundaryTmpl.h"
namespace LX
{


class BoundaryImpl : public BoundaryTmpl<Boundary>
{
public:
    BoundaryImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
