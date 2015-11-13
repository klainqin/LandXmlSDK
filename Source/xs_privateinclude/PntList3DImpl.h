#if !defined(__PNTLIST3DIMPL_H)
#define __PNTLIST3DIMPL_H

#include "PntList3DTmpl.h"
namespace LX
{


class PntList3DImpl : public PntList3DTmpl<PntList3D>
{
public:
    PntList3DImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
