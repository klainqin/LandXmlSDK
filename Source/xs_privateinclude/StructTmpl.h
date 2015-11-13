#if !defined(__STRUCTTMPL_H)
#define __STRUCTTMPL_H

#include "Struct.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Center;
class InvertCollection;
class StructFlow;
class FeatureCollection;

// Class : Struct
template<class T>
class StructTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    StructTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~StructTmpl ();
public:
	// Collections
    virtual InvertCollection& Invert();
    virtual const InvertCollection& Invert() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Center* getCenter() const;
    virtual void setCenter(Center* value);

    virtual Object* getStructGeom() const;
    virtual void setStructGeom(Object* value);

    virtual StructFlow* getStructFlow() const;
    virtual void setStructFlow(StructFlow* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getElevRim() const;
    virtual void setElevRim(double value);
    virtual bool hasValue_ElevRim() const;
    virtual void resetValue_ElevRim();
    
    virtual double getElevSump() const;
    virtual void setElevSump(double value);
    virtual bool hasValue_ElevSump() const;
    virtual void resetValue_ElevSump();
    
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
    Center *m_Center;
    Object *m_StructGeom;
    InvertCollection *m_Invert;
    StructFlow *m_StructFlow;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_ElevRim;
    bool m_bElevRim_valueSet;
    double m_ElevSump;
    bool m_bElevSump_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
