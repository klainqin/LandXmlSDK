#if !defined(__CANTIMPL_H)
#define __CANTIMPL_H

#include "CantTmpl.h"
namespace LX
{


class CantImpl : public CantTmpl<Cant>
{
public:
    CantImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
