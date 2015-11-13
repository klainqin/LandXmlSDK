#if !defined(__CORNERIMPL_H)
#define __CORNERIMPL_H

#include "CornerTmpl.h"
namespace LX
{


class CornerImpl : public CornerTmpl<Corner>
{
public:
    CornerImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
