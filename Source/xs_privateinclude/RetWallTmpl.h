#if !defined(__RETWALLTMPL_H)
#define __RETWALLTMPL_H

#include "RetWall.h"
#include "LXTypesTmpl.h"

namespace LX
{

class RetWallPntCollection;
class FeatureCollection;

// Class : RetWall
template<class T>
class RetWallTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RetWallTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RetWallTmpl ();
public:
	// Collections
    virtual RetWallPntCollection& RetWallPnt();
    virtual const RetWallPntCollection& RetWallPnt() const;
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
    RetWallPntCollection *m_RetWallPnt;
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
