/////////////////////////////////////////////////////////////////////////////
//
// File: GlobalNamedObjectsImpl.cpp
//
// Description: 
//
/////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include "LXDefs.h"

#include "NamedObjMapTmpl.inl"
#include "GlobalNamedObjectsImpl.h"

namespace LX
{

// Force instantiation of the NamedObjMapTmpl objects.
#define GLOBAL_NAMED_OBJECT_COLL_TMPL(T_Object, T_Id) \
    template ObjectTmpl<T_Object##Collection>; \
    template NamedObjMapTmpl<T_Object, T_Object##Collection, T_Id, T_Object##CollectionIterator, T_Object##CollectionConstIterator>

GLOBAL_NAMED_OBJECT_COLL_TMPL(CoordGeom, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(CgPoints, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(CgPoint, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Monument, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Surface, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Parcel, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Alignment, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(PipeNetwork, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Pipe, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Struct, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(CrossSect, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(Roadway, String);
GLOBAL_NAMED_OBJECT_COLL_TMPL(GradeModel, String);




GlobalNamedObjectsImpl::~GlobalNamedObjectsImpl()
{
    // Clear the collections before letting the destructor deallocate them.
    // The reason is because the collection destructor will delete the contained objects.
    // It is assumed the local collections that contain these object will do this for us.
    m_collCoordGeom.clear();
    m_collCgPoints.clear();
    m_collCgPoint.clear();
    m_collMonument.clear();
    m_collSurface.clear();
    m_collParcel.clear();
    m_collAlignment.clear();
    m_collPipeNetwork.clear();
    m_collPipe.clear();
    m_collStruct.clear();
    m_collCrossSect.clear();
    m_collRoadway.clear();
    m_collGradeModel.clear();
}

#define GLOBALNAMEDOBJECT_GET(T_Object) \
T_Object##Collection& GlobalNamedObjectsImpl::get##T_Object##Collection () \
{ \
    return m_coll##T_Object; \
} \
\
T_Object##Collection& GlobalNamedObjectsImpl::getWritable##T_Object##Collection() \
{ \
    return m_coll##T_Object; \
} \


GLOBALNAMEDOBJECT_GET(CoordGeom)
GLOBALNAMEDOBJECT_GET(CgPoints)
GLOBALNAMEDOBJECT_GET(CgPoint)
GLOBALNAMEDOBJECT_GET(Monument)
GLOBALNAMEDOBJECT_GET(Surface)
GLOBALNAMEDOBJECT_GET(Parcel)
GLOBALNAMEDOBJECT_GET(Alignment)
GLOBALNAMEDOBJECT_GET(PipeNetwork)
GLOBALNAMEDOBJECT_GET(Pipe)
GLOBALNAMEDOBJECT_GET(Struct)
GLOBALNAMEDOBJECT_GET(CrossSect)
GLOBALNAMEDOBJECT_GET(Roadway)
GLOBALNAMEDOBJECT_GET(GradeModel)

}; // End Namespace 


