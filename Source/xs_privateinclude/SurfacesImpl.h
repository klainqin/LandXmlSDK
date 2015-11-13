#if !defined(__SURFACESIMPL_H)
#define __SURFACESIMPL_H

#include "SurfacesTmpl.h"
namespace LX
{


class SurfacesImpl : public SurfacesTmpl<Surfaces>
{
public:
    SurfacesImpl (DocumentImpl* pDoc);
};
}; // namespace : LX
#endif
