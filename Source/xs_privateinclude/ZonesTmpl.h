#if !defined(__ZONESTMPL_H)
#define __ZONESTMPL_H

#include "Zones.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ZoneCollection;
class ZoneHingeCollection;
class FeatureCollection;

// Class : Zones
template<class T>
class ZonesTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZonesTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZonesTmpl ();
public:
	// Collections
    virtual ZoneCollection& Zone();
    virtual const ZoneCollection& Zone() const;
    virtual ZoneHingeCollection& ZoneHinge();
    virtual const ZoneHingeCollection& ZoneHinge() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual EnumSideofRoadType::Values getSide() const;
    virtual void setSide(EnumSideofRoadType::Values value);
    virtual bool hasValue_Side() const;
    virtual void resetValue_Side();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ZoneCollection *m_Zone;
    ZoneHingeCollection *m_ZoneHinge;
    FeatureCollection *m_Feature;
    EnumSideofRoadType::Values m_Side;
    bool m_bSide_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
