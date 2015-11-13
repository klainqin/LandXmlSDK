#if !defined(__ALIGNMENTTMPL_H)
#define __ALIGNMENTTMPL_H

#include "Alignment.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CoordGeom;
class Start;
class AlignPIs;
class Cant;
class CrossSectsCollection;
class StaEquationCollection;
class ProfileCollection;
class SuperelevationCollection;
class FeatureCollection;

// Class : Alignment
template<class T>
class AlignmentTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AlignmentTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AlignmentTmpl ();
public:
	// Collections
    virtual CrossSectsCollection& CrossSects();
    virtual const CrossSectsCollection& CrossSects() const;
    virtual StaEquationCollection& StaEquation();
    virtual const StaEquationCollection& StaEquation() const;
    virtual ProfileCollection& Profile();
    virtual const ProfileCollection& Profile() const;
    virtual SuperelevationCollection& Superelevation();
    virtual const SuperelevationCollection& Superelevation() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual CoordGeom* getCoordGeom() const;
    virtual void setCoordGeom(CoordGeom* value);

    virtual Start* getStart() const;
    virtual void setStart(Start* value);

    virtual AlignPIs* getAlignPIs() const;
    virtual void setAlignPIs(AlignPIs* value);

    virtual Cant* getCant() const;
    virtual void setCant(Cant* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CoordGeom *m_CoordGeom;
    Start *m_Start;
    AlignPIs *m_AlignPIs;
    Cant *m_Cant;
    CrossSectsCollection *m_CrossSects;
    StaEquationCollection *m_StaEquation;
    ProfileCollection *m_Profile;
    SuperelevationCollection *m_Superelevation;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    double m_Length;
    bool m_bLength_valueSet;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
