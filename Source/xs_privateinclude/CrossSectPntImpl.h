#if !defined(__CROSSSECTPNTIMPL_H)
#define __CROSSSECTPNTIMPL_H

#include "CrossSectPntTmpl.h"
namespace LX
{


class CrossSectPntImpl : public CrossSectPntTmpl<CrossSectPnt>
{
public:
    CrossSectPntImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
