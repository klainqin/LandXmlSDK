#if !defined(__FULLSUPERSTAIMPL_H)
#define __FULLSUPERSTAIMPL_H

#include "FullSuperStaTmpl.h"
namespace LX
{


class FullSuperStaImpl : public FullSuperStaTmpl<FullSuperSta>
{
public:
    FullSuperStaImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
