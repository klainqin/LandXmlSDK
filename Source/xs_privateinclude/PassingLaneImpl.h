#if !defined(__PASSINGLANEIMPL_H)
#define __PASSINGLANEIMPL_H

#include "PassingLaneTmpl.h"
namespace LX
{


class PassingLaneImpl : public PassingLaneTmpl<PassingLane>
{
public:
    PassingLaneImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
