#if !defined(__PERSONNELIMPL_H)
#define __PERSONNELIMPL_H

#include "PersonnelTmpl.h"
namespace LX
{


class PersonnelImpl : public PersonnelTmpl<Personnel>
{
public:
    PersonnelImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
