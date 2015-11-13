#if !defined(__OUTSPIRALIMPL_H)
#define __OUTSPIRALIMPL_H

#include "OutSpiralTmpl.h"
namespace LX
{


class OutSpiralImpl : public OutSpiralTmpl<OutSpiral>
{
public:
    OutSpiralImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
