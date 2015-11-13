#if !defined(__TIMINGIMPL_H)
#define __TIMINGIMPL_H

#include "TimingTmpl.h"
namespace LX
{


class TimingImpl : public TimingTmpl<Timing>
{
public:
    TimingImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
