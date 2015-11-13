#if !defined(__EQUIPMENTIMPL_H)
#define __EQUIPMENTIMPL_H

#include "EquipmentTmpl.h"
namespace LX
{


class EquipmentImpl : public EquipmentTmpl<Equipment>
{
public:
    EquipmentImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
