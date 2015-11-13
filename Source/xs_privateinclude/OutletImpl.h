#if !defined(__OUTLETIMPL_H)
#define __OUTLETIMPL_H

#include "OutletTmpl.h"
namespace LX
{


class OutletImpl : public OutletTmpl<Outlet>
{
public:
    OutletImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
