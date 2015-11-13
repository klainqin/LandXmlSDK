#if !defined(__BIKEFACILITIESIMPL_H)
#define __BIKEFACILITIESIMPL_H

#include "BikeFacilitiesTmpl.h"
namespace LX
{


class BikeFacilitiesImpl : public BikeFacilitiesTmpl<BikeFacilities>
{
public:
    BikeFacilitiesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
