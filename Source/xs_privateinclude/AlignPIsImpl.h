#if !defined(__ALIGNPISIMPL_H)
#define __ALIGNPISIMPL_H

#include "AlignPIsTmpl.h"
namespace LX
{


class AlignPIsImpl : public AlignPIsTmpl<AlignPIs>
{
public:
    AlignPIsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
