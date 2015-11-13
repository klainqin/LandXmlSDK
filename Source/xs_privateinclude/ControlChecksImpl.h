#if !defined(__CONTROLCHECKSIMPL_H)
#define __CONTROLCHECKSIMPL_H

#include "ControlChecksTmpl.h"
namespace LX
{


class ControlChecksImpl : public ControlChecksTmpl<ControlChecks>
{
public:
    ControlChecksImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
