#if !defined(__OFFSETVALSIMPL_H)
#define __OFFSETVALSIMPL_H

#include "OffsetValsTmpl.h"
namespace LX
{


class OffsetValsImpl : public OffsetValsTmpl<OffsetVals>
{
public:
    OffsetValsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
