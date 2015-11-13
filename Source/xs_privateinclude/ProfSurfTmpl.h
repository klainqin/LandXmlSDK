#if !defined(__PROFSURFTMPL_H)
#define __PROFSURFTMPL_H

#include "ProfSurf.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PntList2DCollection;
class FeatureCollection;

// Class : ProfSurf
template<class T>
class ProfSurfTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ProfSurfTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ProfSurfTmpl ();
public:
	// Collections
    virtual PntList2DCollection& PntList2D();
    virtual const PntList2DCollection& PntList2D() const;
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

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
    PntList2DCollection *m_PntList2D;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
