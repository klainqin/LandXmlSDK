#if !defined(__HEADOFPOWERIMPL_H)
#define __HEADOFPOWERIMPL_H

#include "HeadOfPowerTmpl.h"
namespace LX
{


class HeadOfPowerImpl : public HeadOfPowerTmpl<HeadOfPower>
{
public:
    HeadOfPowerImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
