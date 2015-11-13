#if !defined(__SURFACEIMPL_H)
#define __SURFACEIMPL_H

#include "SurfaceTmpl.h"
#include "SurfaceCollection.h"
namespace LX
{


class SurfaceImpl : public SurfaceTmpl<Surface>
{
public:
    SurfaceImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
