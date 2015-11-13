#if !defined(__GPSQCINFOLEVEL1IMPL_H)
#define __GPSQCINFOLEVEL1IMPL_H

#include "GPSQCInfoLevel1Tmpl.h"
namespace LX
{


class GPSQCInfoLevel1Impl : public GPSQCInfoLevel1Tmpl<GPSQCInfoLevel1>
{
public:
    GPSQCInfoLevel1Impl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
