#if !defined(__PNTLIST2DIMPL_H)
#define __PNTLIST2DIMPL_H

#include "PntList2DTmpl.h"
namespace LX
{


class PntList2DImpl : public PntList2DTmpl<PntList2D>
{
public:
    PntList2DImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
