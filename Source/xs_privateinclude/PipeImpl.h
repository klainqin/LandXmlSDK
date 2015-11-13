#if !defined(__PIPEIMPL_H)
#define __PIPEIMPL_H

#include "PipeTmpl.h"
#include "PipeCollection.h"
namespace LX
{


class PipeImpl : public PipeTmpl<Pipe>
{
public:
    PipeImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
