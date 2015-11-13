#if !defined(__ENDOFRUNOUTSTAIMPL_H)
#define __ENDOFRUNOUTSTAIMPL_H

#include "EndofRunoutStaTmpl.h"
namespace LX
{


class EndofRunoutStaImpl : public EndofRunoutStaTmpl<EndofRunoutSta>
{
public:
    EndofRunoutStaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
