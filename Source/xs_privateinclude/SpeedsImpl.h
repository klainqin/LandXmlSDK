#if !defined(__SPEEDSIMPL_H)
#define __SPEEDSIMPL_H

#include "SpeedsTmpl.h"
namespace LX
{


class SpeedsImpl : public SpeedsTmpl<Speeds>
{
public:
    SpeedsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
