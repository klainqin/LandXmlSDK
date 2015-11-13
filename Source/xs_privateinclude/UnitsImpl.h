#if !defined(__UNITSIMPL_H)
#define __UNITSIMPL_H

#include "UnitsTmpl.h"
namespace LX
{


class UnitsImpl : public UnitsTmpl<Units>
{
public:
    UnitsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
