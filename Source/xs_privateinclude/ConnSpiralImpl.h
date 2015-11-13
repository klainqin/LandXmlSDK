#if !defined(__CONNSPIRALIMPL_H)
#define __CONNSPIRALIMPL_H

#include "ConnSpiralTmpl.h"
namespace LX
{


class ConnSpiralImpl : public ConnSpiralTmpl<ConnSpiral>
{
public:
    ConnSpiralImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
