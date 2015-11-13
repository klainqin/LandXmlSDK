#if !defined(__THRULANEIMPL_H)
#define __THRULANEIMPL_H

#include "ThruLaneTmpl.h"
namespace LX
{


class ThruLaneImpl : public ThruLaneTmpl<ThruLane>
{
public:
    ThruLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
