#if !defined(__CIRCCURVEIMPL_H)
#define __CIRCCURVEIMPL_H

#include "CircCurveTmpl.h"
namespace LX
{


class CircCurveImpl : public CircCurveTmpl<CircCurve>
{
public:
    CircCurveImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
