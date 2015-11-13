#if !defined(__ZONECROSSSECTSTRUCTUREIMPL_H)
#define __ZONECROSSSECTSTRUCTUREIMPL_H

#include "ZoneCrossSectStructureTmpl.h"
namespace LX
{


class ZoneCrossSectStructureImpl : public ZoneCrossSectStructureTmpl<ZoneCrossSectStructure>
{
public:
    ZoneCrossSectStructureImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
