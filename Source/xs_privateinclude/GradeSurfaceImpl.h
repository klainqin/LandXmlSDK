#if !defined(__GRADESURFACEIMPL_H)
#define __GRADESURFACEIMPL_H

#include "GradeSurfaceTmpl.h"
namespace LX
{


class GradeSurfaceImpl : public GradeSurfaceTmpl<GradeSurface>
{
public:
    GradeSurfaceImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
