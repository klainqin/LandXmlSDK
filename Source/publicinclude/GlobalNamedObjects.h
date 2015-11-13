#if !defined(__LX_GLOBALNAMEDOBJECTS_H)
#define __LX_GLOBALNAMEDOBJECTS_H

/////////////////////////////////////////////////////////////////////////////
//
// File: GlobalNamedObjects.h
//
// Description: 
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"

namespace LX
{
class CoordGeomCollection;
class CgPointsCollection;
class CgPointCollection;
class MonumentCollection;
class SurfaceCollection;
class ParcelCollection;
class AlignmentCollection;
class PipeNetworkCollection;
class PipeCollection;
class StructCollection;
class CrossSectCollection;
class RoadwayCollection;
class GradeModelCollection;

/////////////////////////////////////////////////////////////////////////////
//
// Class: GlobalNamedObjects
//
// Description:
//		
/////////////////////////////////////////////////////////////////////////////
class GlobalNamedObjects
{
public:
    virtual CoordGeomCollection& getCoordGeomCollection() = 0;
    virtual CgPointsCollection& getCgPointsCollection() = 0;
    virtual CgPointCollection& getCgPointCollection() = 0;
    virtual MonumentCollection& getMonumentCollection() = 0;
    virtual SurfaceCollection& getSurfaceCollection() = 0;
    virtual ParcelCollection& getParcelCollection() = 0;
    virtual AlignmentCollection& getAlignmentCollection() = 0;
    virtual PipeNetworkCollection& getPipeNetworkCollection() = 0;
    virtual PipeCollection& getPipeCollection() = 0;
    virtual StructCollection& getStructCollection() = 0;
    virtual CrossSectCollection& getCrossSectCollection() = 0;
    virtual RoadwayCollection& getRoadwayCollection() = 0;
    virtual GradeModelCollection& getGradeModelCollection() = 0;
};

}; // End Namespace

#endif


