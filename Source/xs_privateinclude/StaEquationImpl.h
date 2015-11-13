#if !defined(__STAEQUATIONIMPL_H)
#define __STAEQUATIONIMPL_H

#include "StaEquationTmpl.h"
namespace LX
{


class StaEquationImpl : public StaEquationTmpl<StaEquation>
{
public:
    StaEquationImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
