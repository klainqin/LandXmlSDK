#if !defined(__INSTRUMENTPOINTIMPL_H)
#define __INSTRUMENTPOINTIMPL_H

#include "InstrumentPointTmpl.h"
namespace LX
{


class InstrumentPointImpl : public InstrumentPointTmpl<InstrumentPoint>
{
public:
    InstrumentPointImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
