#if !defined(__STRUCTFLOWIMPL_H)
#define __STRUCTFLOWIMPL_H

#include "StructFlowTmpl.h"
namespace LX
{


class StructFlowImpl : public StructFlowTmpl<StructFlow>
{
public:
    StructFlowImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
