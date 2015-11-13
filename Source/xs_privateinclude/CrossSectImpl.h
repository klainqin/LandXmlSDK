#if !defined(__CROSSSECTIMPL_H)
#define __CROSSSECTIMPL_H

#include "CrossSectTmpl.h"
namespace LX
{


class CrossSectImpl : public CrossSectTmpl<CrossSect>
{
public:
    CrossSectImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
