#if !defined(__PROFALIGNTMPL_H)
#define __PROFALIGNTMPL_H

#include "ProfAlign.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ProfAlign
template<class T>
class ProfAlignTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	// Classes

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ProfAlignTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ProfAlignTmpl ();
public:
	// Collections
    virtual ObjectCollection& VertGeomList();
    virtual const ObjectCollection& VertGeomList() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

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
    ObjectCollection *m_VertGeomList;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
