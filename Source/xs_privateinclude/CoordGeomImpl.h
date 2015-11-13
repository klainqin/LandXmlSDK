#if !defined(__COORDGEOMIMPL_H)
#define __COORDGEOMIMPL_H

#include "CoordGeomTmpl.h"
#include "CoordGeomCollection.h"
namespace LX
{


class CoordGeomImpl : public CoordGeomTmpl<CoordGeom>
{
public:
    CoordGeomImpl (DocumentImpl* pDoc);
    Object* getGlobalCollection ();
};
}; // namespace : LX
#endif
