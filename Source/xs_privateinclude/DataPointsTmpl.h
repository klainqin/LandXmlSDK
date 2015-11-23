#if !defined(__DATAPOINTSTMPL_H)
#define __DATAPOINTSTMPL_H

#include "DataPoints.h"
#include "LXTypesTmpl.h"

namespace LX
{

class PntList3DCollection;
class FeatureCollection;

// Class : DataPoints
template<class T>
class DataPointsTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DataPointsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DataPointsTmpl ();
public:
	// Collections
    virtual PntList3DCollection& PntList3D();
    virtual const PntList3DCollection& PntList3D() const;
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
    
    virtual String getCode() const;
    virtual void setCode(String value);
    virtual bool hasValue_Code() const;
    virtual void resetValue_Code();
    
    virtual EnumStateType::Values getState() const;
    virtual void setState(EnumStateType::Values value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getPntRef() const;
    virtual void setPntRef(String value);
    virtual bool hasValue_PntRef() const;
    virtual void resetValue_PntRef();
    
    virtual EnumPointGeometryType::Values getPointGeometry() const;
    virtual void setPointGeometry(EnumPointGeometryType::Values value);
    virtual bool hasValue_PointGeometry() const;
    virtual void resetValue_PointGeometry();
    
    virtual EnumDTMAttributeType::Values getDTMAttribute() const;
    virtual void setDTMAttribute(EnumDTMAttributeType::Values value);
    virtual bool hasValue_DTMAttribute() const;
    virtual void resetValue_DTMAttribute();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    PntList3DCollection *m_PntList3D;
    FeatureCollection *m_Feature;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Code;
    bool m_bCode_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    String m_PntRef;
    bool m_bPntRef_valueSet;
    EnumPointGeometryType::Values m_PointGeometry;
    bool m_bPointGeometry_valueSet;
    EnumDTMAttributeType::Values m_DTMAttribute;
    bool m_bDTMAttribute_valueSet;
};
}; // namespace : LX
#endif
