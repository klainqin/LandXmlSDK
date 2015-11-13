#if !defined(__PARACURVEIMPL_H)
#define __PARACURVEIMPL_H

#include "ParaCurveTmpl.h"
namespace LX
{


class ParaCurveImpl : public ParaCurveTmpl<ParaCurve>
{
public:
    ParaCurveImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
