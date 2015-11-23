#if !defined(__PIPETMPL_H)
#define __PIPETMPL_H

#include "Pipe.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Struct;
class Struct;
class PipeFlow;
class Center;
class FeatureCollection;

// Class : Pipe
template<class T>
class PipeTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PipeTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PipeTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Object* getPipeGeom() const;
    virtual void setPipeGeom(Object* value);

    virtual PipeFlow* getPipeFlow() const;
    virtual void setPipeFlow(PipeFlow* value);

    virtual Center* getCenter() const;
    virtual void setCenter(Center* value);


    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getRefEnd() const;
    virtual void setRefEnd(String value);
    virtual bool hasValue_RefEnd() const;
    virtual void resetValue_RefEnd();
    
    virtual String getRefStart() const;
    virtual void setRefStart(String value);
    virtual bool hasValue_RefStart() const;
    virtual void resetValue_RefStart();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual double getLength() const;
    virtual void setLength(double value);
    virtual bool hasValue_Length() const;
    virtual void resetValue_Length();
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    
    virtual double getSlope() const;
    virtual void setSlope(double value);
    virtual bool hasValue_Slope() const;
    virtual void resetValue_Slope();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

public:
	// Resolvers
    virtual Struct* resolveRefStart();
    virtual Struct* resolveRefEnd();
    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Object *m_PipeGeom;
    PipeFlow *m_PipeFlow;
    Center *m_Center;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_RefEnd;
    bool m_bRefEnd_valueSet;
    String m_RefStart;
    bool m_bRefStart_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    double m_Length;
    bool m_bLength_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
    double m_Slope;
    bool m_bSlope_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
