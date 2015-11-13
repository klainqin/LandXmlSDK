#if !defined(__CURVE2IMPL_H)
#define __CURVE2IMPL_H

#include "Curve2Tmpl.h"
namespace LX
{


class Curve2Impl : public Curve2Tmpl<Curve2>
{
public:
    Curve2Impl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
