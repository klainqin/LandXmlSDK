#if !defined(__PIPEFLOWIMPL_H)
#define __PIPEFLOWIMPL_H

#include "PipeFlowTmpl.h"
namespace LX
{


class PipeFlowImpl : public PipeFlowTmpl<PipeFlow>
{
public:
    PipeFlowImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
