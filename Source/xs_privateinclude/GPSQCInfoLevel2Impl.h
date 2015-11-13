#if !defined(__GPSQCINFOLEVEL2IMPL_H)
#define __GPSQCINFOLEVEL2IMPL_H

#include "GPSQCInfoLevel2Tmpl.h"
namespace LX
{


class GPSQCInfoLevel2Impl : public GPSQCInfoLevel2Tmpl<GPSQCInfoLevel2>
{
public:
    GPSQCInfoLevel2Impl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
