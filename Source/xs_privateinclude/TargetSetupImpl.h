#if !defined(__TARGETSETUPIMPL_H)
#define __TARGETSETUPIMPL_H

#include "TargetSetupTmpl.h"
namespace LX
{


class TargetSetupImpl : public TargetSetupTmpl<TargetSetup>
{
public:
    TargetSetupImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
