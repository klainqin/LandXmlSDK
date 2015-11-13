#if !defined(__LOCATIONADDRESSIMPL_H)
#define __LOCATIONADDRESSIMPL_H

#include "LocationAddressTmpl.h"
namespace LX
{


class LocationAddressImpl : public LocationAddressTmpl<LocationAddress>
{
public:
    LocationAddressImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
