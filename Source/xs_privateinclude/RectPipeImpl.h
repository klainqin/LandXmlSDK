#if !defined(__RECTPIPEIMPL_H)
#define __RECTPIPEIMPL_H

#include "RectPipeTmpl.h"
namespace LX
{


class RectPipeImpl : public RectPipeTmpl<RectPipe>
{
public:
    RectPipeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
