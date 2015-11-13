#if !defined(__CROSSSECTSURFIMPL_H)
#define __CROSSSECTSURFIMPL_H

#include "CrossSectSurfTmpl.h"
namespace LX
{


class CrossSectSurfImpl : public CrossSectSurfTmpl<CrossSectSurf>
{
public:
    CrossSectSurfImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
