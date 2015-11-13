#if !defined(__CONTOURIMPL_H)
#define __CONTOURIMPL_H

#include "ContourTmpl.h"
namespace LX
{


class ContourImpl : public ContourTmpl<Contour>
{
public:
    ContourImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
