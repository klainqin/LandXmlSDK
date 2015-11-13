#if !defined(__RUNOFFSTAIMPL_H)
#define __RUNOFFSTAIMPL_H

#include "RunoffStaTmpl.h"
namespace LX
{


class RunoffStaImpl : public RunoffStaTmpl<RunoffSta>
{
public:
    RunoffStaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
