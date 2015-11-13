#if !defined(__PNTSIMPL_H)
#define __PNTSIMPL_H

#include "PntsTmpl.h"
namespace LX
{


class PntsImpl : public PntsTmpl<Pnts>
{
public:
    PntsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
