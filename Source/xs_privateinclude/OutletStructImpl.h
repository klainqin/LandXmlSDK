#if !defined(__OUTLETSTRUCTIMPL_H)
#define __OUTLETSTRUCTIMPL_H

#include "OutletStructTmpl.h"
namespace LX
{


class OutletStructImpl : public OutletStructTmpl<OutletStruct>
{
public:
    OutletStructImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
