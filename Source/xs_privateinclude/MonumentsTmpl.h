#if !defined(__MONUMENTSTMPL_H)
#define __MONUMENTSTMPL_H

#include "Monuments.h"
#include "LXTypesTmpl.h"

namespace LX
{

class MonumentCollection;
class FeatureCollection;

// Class : Monuments
template<class T>
class MonumentsTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    MonumentsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~MonumentsTmpl ();
public:
	// Collections
    virtual MonumentCollection& Monument();
    virtual const MonumentCollection& Monument() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

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
    MonumentCollection *m_Monument;
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
