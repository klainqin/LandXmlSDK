#if !defined(__UNSYMPARACURVEIMPL_H)
#define __UNSYMPARACURVEIMPL_H

#include "UnsymParaCurveTmpl.h"
namespace LX
{


class UnsymParaCurveImpl : public UnsymParaCurveTmpl<UnsymParaCurve>
{
public:
    UnsymParaCurveImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
