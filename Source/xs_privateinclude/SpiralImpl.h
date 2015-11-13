#if !defined(__SPIRALIMPL_H)
#define __SPIRALIMPL_H

#include "SpiralTmpl.h"
namespace LX
{


class SpiralImpl : public SpiralTmpl<Spiral>
{
public:
    SpiralImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
