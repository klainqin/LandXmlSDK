#if !defined(__TURNRESTRICTIONIMPL_H)
#define __TURNRESTRICTIONIMPL_H

#include "TurnRestrictionTmpl.h"
namespace LX
{


class TurnRestrictionImpl : public TurnRestrictionTmpl<TurnRestriction>
{
public:
    TurnRestrictionImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
