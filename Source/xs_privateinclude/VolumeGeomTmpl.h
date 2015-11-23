#if !defined(__VOLUMEGEOMTMPL_H)
#define __VOLUMEGEOMTMPL_H

#include "VolumeGeom.h"
#include "LXTypesTmpl.h"

namespace LX
{

class CoordGeomCollection;

// Class : VolumeGeom
template<class T>
class VolumeGeomTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    VolumeGeomTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~VolumeGeomTmpl ();
public:
	// Collections
    virtual CoordGeomCollection& CoordGeom();
    virtual const CoordGeomCollection& CoordGeom() const;

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
    
    virtual String getOID() const;
    virtual void setOID(String value);
    virtual bool hasValue_OID() const;
    virtual void resetValue_OID();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    CoordGeomCollection *m_CoordGeom;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_OID;
    bool m_bOID_valueSet;
};
}; // namespace : LX
#endif
