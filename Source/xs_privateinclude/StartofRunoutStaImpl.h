#if !defined(__STARTOFRUNOUTSTAIMPL_H)
#define __STARTOFRUNOUTSTAIMPL_H

#include "StartofRunoutStaTmpl.h"
namespace LX
{


class StartofRunoutStaImpl : public StartofRunoutStaTmpl<StartofRunoutSta>
{
public:
    StartofRunoutStaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
