#if !defined(__ALIGNPIIMPL_H)
#define __ALIGNPIIMPL_H

#include "AlignPITmpl.h"
namespace LX
{


class AlignPIImpl : public AlignPITmpl<AlignPI>
{
public:
    AlignPIImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
