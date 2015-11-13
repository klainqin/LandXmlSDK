#if !defined(__GPSRECEIVERDETAILSIMPL_H)
#define __GPSRECEIVERDETAILSIMPL_H

#include "GPSReceiverDetailsTmpl.h"
namespace LX
{


class GPSReceiverDetailsImpl : public GPSReceiverDetailsTmpl<GPSReceiverDetails>
{
public:
    GPSReceiverDetailsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
