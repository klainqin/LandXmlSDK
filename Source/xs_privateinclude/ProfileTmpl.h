#if !defined(__PROFILETMPL_H)
#define __PROFILETMPL_H

#include "Profile.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ProfSurfCollection;
class ProfAlignCollection;
class FeatureCollection;

// Class : Profile
template<class T>
class ProfileTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ProfileTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ProfileTmpl ();
public:
	// Collections
    virtual ProfSurfCollection& ProfSurf();
    virtual const ProfSurfCollection& ProfSurf() const;
    virtual ProfAlignCollection& ProfAlign();
    virtual const ProfAlignCollection& ProfAlign() const;
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
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ProfSurfCollection *m_ProfSurf;
    ProfAlignCollection *m_ProfAlign;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
};
}; // namespace : LX
#endif
