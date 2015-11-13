#if !defined(__ALIGNMENTSIMPL_H)
#define __ALIGNMENTSIMPL_H

#include "AlignmentsTmpl.h"
namespace LX
{


class AlignmentsImpl : public AlignmentsTmpl<Alignments>
{
public:
    AlignmentsImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
