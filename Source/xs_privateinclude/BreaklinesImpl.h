#if !defined(__BREAKLINESIMPL_H)
#define __BREAKLINESIMPL_H

#include "BreaklinesTmpl.h"
namespace LX
{


class BreaklinesImpl : public BreaklinesTmpl<Breaklines>
{
public:
    BreaklinesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
