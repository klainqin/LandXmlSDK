#if !defined(__BREAKLINEIMPL_H)
#define __BREAKLINEIMPL_H

#include "BreaklineTmpl.h"
namespace LX
{


class BreaklineImpl : public BreaklineTmpl<Breakline>
{
public:
    BreaklineImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
