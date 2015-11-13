#if !defined(__TURNSPEEDIMPL_H)
#define __TURNSPEEDIMPL_H

#include "TurnSpeedTmpl.h"
namespace LX
{


class TurnSpeedImpl : public TurnSpeedTmpl<TurnSpeed>
{
public:
    TurnSpeedImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
