#if !defined(__LASERSETUPIMPL_H)
#define __LASERSETUPIMPL_H

#include "LaserSetupTmpl.h"
namespace LX
{


class LaserSetupImpl : public LaserSetupTmpl<LaserSetup>
{
public:
    LaserSetupImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
