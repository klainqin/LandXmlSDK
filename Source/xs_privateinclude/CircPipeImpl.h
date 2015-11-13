#if !defined(__CIRCPIPEIMPL_H)
#define __CIRCPIPEIMPL_H

#include "CircPipeTmpl.h"
namespace LX
{


class CircPipeImpl : public CircPipeTmpl<CircPipe>
{
public:
    CircPipeImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
