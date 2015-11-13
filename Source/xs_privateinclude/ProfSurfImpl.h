#if !defined(__PROFSURFIMPL_H)
#define __PROFSURFIMPL_H

#include "ProfSurfTmpl.h"
namespace LX
{


class ProfSurfImpl : public ProfSurfTmpl<ProfSurf>
{
public:
    ProfSurfImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
