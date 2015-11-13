#if !defined(__INSPIRALIMPL_H)
#define __INSPIRALIMPL_H

#include "InSpiralTmpl.h"
namespace LX
{


class InSpiralImpl : public InSpiralTmpl<InSpiral>
{
public:
    InSpiralImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
