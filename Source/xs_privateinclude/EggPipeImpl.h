#if !defined(__EGGPIPEIMPL_H)
#define __EGGPIPEIMPL_H

#include "EggPipeTmpl.h"
namespace LX
{


class EggPipeImpl : public EggPipeTmpl<EggPipe>
{
public:
    EggPipeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
