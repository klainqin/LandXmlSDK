#if !defined(__LANESIMPL_H)
#define __LANESIMPL_H

#include "LanesTmpl.h"
namespace LX
{


class LanesImpl : public LanesTmpl<Lanes>
{
public:
    LanesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
