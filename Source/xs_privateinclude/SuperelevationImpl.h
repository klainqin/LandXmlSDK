#if !defined(__SUPERELEVATIONIMPL_H)
#define __SUPERELEVATIONIMPL_H

#include "SuperelevationTmpl.h"
namespace LX
{


class SuperelevationImpl : public SuperelevationTmpl<Superelevation>
{
public:
    SuperelevationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
