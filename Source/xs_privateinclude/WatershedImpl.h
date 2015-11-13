#if !defined(__WATERSHEDIMPL_H)
#define __WATERSHEDIMPL_H

#include "WatershedTmpl.h"
namespace LX
{


class WatershedImpl : public WatershedTmpl<Watershed>
{
public:
    WatershedImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
