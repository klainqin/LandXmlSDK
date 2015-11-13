#if !defined(__BREAKLINETMPL_H)
#define __BREAKLINETMPL_H

#include "Breakline.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : Breakline
template<class T>
class BreaklineTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    BreaklineTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~BreaklineTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual Object* getPntList() const;
    virtual void setPntList(Object* value);


    virtual EnumBreakLineType::Values getBrkType() const;
    virtual void setBrkType(EnumBreakLineType::Values value);
    virtual bool hasValue_BrkType() const;
    virtual void resetValue_BrkType();
    
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
    Object *m_PntList;
    FeatureCollection *m_Feature;
    EnumBreakLineType::Values m_BrkType;
    bool m_bBrkType_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
