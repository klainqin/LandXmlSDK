#if !defined(__CROSSSECTSIMPL_H)
#define __CROSSSECTSIMPL_H

#include "CrossSectsTmpl.h"
namespace LX
{


class CrossSectsImpl : public CrossSectsTmpl<CrossSects>
{
public:
    CrossSectsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
