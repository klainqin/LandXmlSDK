#if !defined(__LOCATIONIMPL_H)
#define __LOCATIONIMPL_H

#include "LocationTmpl.h"
namespace LX
{


class LocationImpl : public LocationTmpl<Location>
{
public:
    LocationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
