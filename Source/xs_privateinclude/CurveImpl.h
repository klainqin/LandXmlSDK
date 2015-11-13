#if !defined(__CURVEIMPL_H)
#define __CURVEIMPL_H

#include "CurveTmpl.h"
namespace LX
{


class CurveImpl : public CurveTmpl<Curve>
{
public:
    CurveImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
