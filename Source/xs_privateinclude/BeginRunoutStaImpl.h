#if !defined(__BEGINRUNOUTSTAIMPL_H)
#define __BEGINRUNOUTSTAIMPL_H

#include "BeginRunoutStaTmpl.h"
namespace LX
{


class BeginRunoutStaImpl : public BeginRunoutStaTmpl<BeginRunoutSta>
{
public:
    BeginRunoutStaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
