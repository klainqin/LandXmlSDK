#if !defined(__CURVE1IMPL_H)
#define __CURVE1IMPL_H

#include "Curve1Tmpl.h"
namespace LX
{


class Curve1Impl : public Curve1Tmpl<Curve1>
{
public:
    Curve1Impl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
