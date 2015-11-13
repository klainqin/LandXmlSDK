#if !defined(__INSTRUMENTSETUPIMPL_H)
#define __INSTRUMENTSETUPIMPL_H

#include "InstrumentSetupTmpl.h"
namespace LX
{


class InstrumentSetupImpl : public InstrumentSetupTmpl<InstrumentSetup>
{
public:
    InstrumentSetupImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
