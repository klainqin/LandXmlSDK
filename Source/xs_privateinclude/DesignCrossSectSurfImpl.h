#if !defined(__DESIGNCROSSSECTSURFIMPL_H)
#define __DESIGNCROSSSECTSURFIMPL_H

#include "DesignCrossSectSurfTmpl.h"
namespace LX
{


class DesignCrossSectSurfImpl : public DesignCrossSectSurfTmpl<DesignCrossSectSurf>
{
public:
    DesignCrossSectSurfImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
