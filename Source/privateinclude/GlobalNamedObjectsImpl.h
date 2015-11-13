#if !defined(__LX_GLOBALNAMEDOBJECTSIMPL_H)
#define __LX_GLOBALNAMEDOBJECTSIMPL_H

/////////////////////////////////////////////////////////////////////////////
//
// File: GlobalNamedObjectsImpl.h
//
// Description: 
//
/////////////////////////////////////////////////////////////////////////////

#include "LXDefs.h"
#include "GlobalNamedObjects.h"

#include "CoordGeomCollectionImpl.h"
#include "CgPointsCollectionImpl.h"
#include "CgPointCollectionImpl.h"
#include "MonumentCollectionImpl.h"
#include "SurfaceCollectionImpl.h"
#include "ParcelCollectionImpl.h"
#include "AlignmentCollectionImpl.h"
#include "PipeNetworkCollectionImpl.h"
#include "PipeCollectionImpl.h"
#include "StructCollectionImpl.h"
#include "CrossSectCollectionImpl.h"
#include "RoadwayCollectionImpl.h"
#include "GradeModelCollectionImpl.h"

#include "NamedObjMapTmpl.h"

namespace LX
{

#define GLOBAL_NAMED_OBJECT_COLL_DEF(T_Object, T_Id) NamedObjMapTmpl<T_Object, T_Object##Collection, T_Id, T_Object##CollectionIterator, T_Object##CollectionConstIterator> m_coll##T_Object

/////////////////////////////////////////////////////////////////////////////
//
// Class: GlobalNamedObjects
//
// Description:
//		
/////////////////////////////////////////////////////////////////////////////
class GlobalNamedObjectsImpl : public GlobalNamedObjects
{
public:
	~GlobalNamedObjectsImpl();
public:
    virtual CoordGeomCollection& getCoordGeomCollection();
    virtual CgPointsCollection& getCgPointsCollection();
    virtual CgPointCollection& getCgPointCollection();
    virtual MonumentCollection& getMonumentCollection();
    virtual SurfaceCollection& getSurfaceCollection();
    virtual ParcelCollection& getParcelCollection();
    virtual AlignmentCollection& getAlignmentCollection();
    virtual PipeNetworkCollection& getPipeNetworkCollection();
    virtual PipeCollection& getPipeCollection();
    virtual StructCollection& getStructCollection();
    virtual CrossSectCollection& getCrossSectCollection();
    virtual RoadwayCollection& getRoadwayCollection();
    virtual GradeModelCollection& getGradeModelCollection();


    virtual CoordGeomCollection& getWritableCoordGeomCollection();
    virtual CgPointsCollection& getWritableCgPointsCollection();
    virtual CgPointCollection& getWritableCgPointCollection();
    virtual MonumentCollection& getWritableMonumentCollection();
    virtual SurfaceCollection& getWritableSurfaceCollection();
    virtual ParcelCollection& getWritableParcelCollection();
    virtual AlignmentCollection& getWritableAlignmentCollection();
    virtual PipeNetworkCollection& getWritablePipeNetworkCollection();
    virtual PipeCollection& getWritablePipeCollection();
    virtual StructCollection& getWritableStructCollection();
    virtual CrossSectCollection& getWritableCrossSectCollection();
    virtual RoadwayCollection& getWritableRoadwayCollection();
    virtual GradeModelCollection& getWritableGradeModelCollection();

private:
    GLOBAL_NAMED_OBJECT_COLL_DEF(CoordGeom, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(CgPoints, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(CgPoint, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Monument, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Surface, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Parcel, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Alignment, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(PipeNetwork, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Pipe, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Struct, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(CrossSect, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(Roadway, String);
    GLOBAL_NAMED_OBJECT_COLL_DEF(GradeModel, String);

};

}; // End Namespace

#endif


