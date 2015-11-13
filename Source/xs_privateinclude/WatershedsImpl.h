#if !defined(__WATERSHEDSIMPL_H)
#define __WATERSHEDSIMPL_H

#include "WatershedsTmpl.h"
namespace LX
{


class WatershedsImpl : public WatershedsTmpl<Watersheds>
{
public:
    WatershedsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
