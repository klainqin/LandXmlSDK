#if !defined(__LINEIMPL_H)
#define __LINEIMPL_H

#include "LineTmpl.h"
namespace LX
{


class LineImpl : public LineTmpl<Line>
{
public:
    LineImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
