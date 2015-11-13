#if !defined(__ELLIPIPEIMPL_H)
#define __ELLIPIPEIMPL_H

#include "ElliPipeTmpl.h"
namespace LX
{


class ElliPipeImpl : public ElliPipeTmpl<ElliPipe>
{
public:
    ElliPipeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
