#if !defined(__PLANFEATURETMPL_H)
#define __PLANFEATURETMPL_H

#include "PlanFeature.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CoordGeom;
class LocationCollection;
class FieldNoteCollection;
class FeatureCollection;

// Class : PlanFeature
template<class T>
class PlanFeatureTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PlanFeatureTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PlanFeatureTmpl ();
public:
	// Collections
    virtual LocationCollection& Location();
    virtual const LocationCollection& Location() const;
    virtual FieldNoteCollection& FieldNote();
    virtual const FieldNoteCollection& FieldNote() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual CoordGeom* getCoordGeom() const;
    virtual void setCoordGeom(CoordGeom* value);


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
    CoordGeom *m_CoordGeom;
    LocationCollection *m_Location;
    FieldNoteCollection *m_FieldNote;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
