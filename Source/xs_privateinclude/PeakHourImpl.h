#if !defined(__PEAKHOURIMPL_H)
#define __PEAKHOURIMPL_H

#include "PeakHourTmpl.h"
namespace LX
{


class PeakHourImpl : public PeakHourTmpl<PeakHour>
{
public:
    PeakHourImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
