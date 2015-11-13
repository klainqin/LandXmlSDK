#if !defined(__GPSVECTORIMPL_H)
#define __GPSVECTORIMPL_H

#include "GPSVectorTmpl.h"
namespace LX
{


class GPSVectorImpl : public GPSVectorTmpl<GPSVector>
{
public:
    GPSVectorImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
