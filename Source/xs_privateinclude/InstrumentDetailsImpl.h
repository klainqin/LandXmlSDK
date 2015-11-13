#if !defined(__INSTRUMENTDETAILSIMPL_H)
#define __INSTRUMENTDETAILSIMPL_H

#include "InstrumentDetailsTmpl.h"
namespace LX
{


class InstrumentDetailsImpl : public InstrumentDetailsTmpl<InstrumentDetails>
{
public:
    InstrumentDetailsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
