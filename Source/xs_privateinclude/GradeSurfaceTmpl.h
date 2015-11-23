#if !defined(__GRADESURFACETMPL_H)
#define __GRADESURFACETMPL_H

#include "GradeSurface.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Start;
class ZonesCollection;
class FeatureCollection;

// Class : GradeSurface
template<class T>
class GradeSurfaceTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GradeSurfaceTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GradeSurfaceTmpl ();
public:
	// Collections
    virtual ZonesCollection& Zones();
    virtual const ZonesCollection& Zones() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Start* getStart() const;
    virtual void setStart(Start* value);

    virtual StringCollection* getSurfaceRefs() const;
    virtual void setSurfaceRefs(StringCollection* value);

    virtual StringCollection* getCgPointRefs() const;
    virtual void setCgPointRefs(StringCollection* value);


    virtual String getAlignmentRef() const;
    virtual void setAlignmentRef(String value);
    virtual bool hasValue_AlignmentRef() const;
    virtual void resetValue_AlignmentRef();
    
    virtual String getStationAlignmentRef() const;
    virtual void setStationAlignmentRef(String value);
    virtual bool hasValue_StationAlignmentRef() const;
    virtual void resetValue_StationAlignmentRef();
    
    virtual EnumZoneSurfaceType::Values getSurfaceType() const;
    virtual void setSurfaceType(EnumZoneSurfaceType::Values value);
    virtual bool hasValue_SurfaceType() const;
    virtual void resetValue_SurfaceType();
    
    virtual String getSurfaceRef() const;
    virtual void setSurfaceRef(String value);
    virtual bool hasValue_SurfaceRef() const;
    virtual void resetValue_SurfaceRef();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Start *m_Start;
    ZonesCollection *m_Zones;
    FeatureCollection *m_Feature;
    String m_AlignmentRef;
    bool m_bAlignmentRef_valueSet;
    String m_StationAlignmentRef;
    bool m_bStationAlignmentRef_valueSet;
    EnumZoneSurfaceType::Values m_SurfaceType;
    bool m_bSurfaceType_valueSet;
    String m_SurfaceRef;
    bool m_bSurfaceRef_valueSet;
    StringCollection *m_SurfaceRefs;
    StringCollection *m_CgPointRefs;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
