#if !defined(__ZONETMPL_H)
#define __ZONETMPL_H

#include "Zone.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ZoneWidthCollection;
class ZoneSlopeCollection;
class ZoneCutFillCollection;
class ZoneMaterialCollection;
class ZoneCrossSectStructureCollection;
class FeatureCollection;

// Class : Zone
template<class T>
class ZoneTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneTmpl ();
public:
	// Collections
    virtual ZoneWidthCollection& ZoneWidth();
    virtual const ZoneWidthCollection& ZoneWidth() const;
    virtual ZoneSlopeCollection& ZoneSlope();
    virtual const ZoneSlopeCollection& ZoneSlope() const;
    virtual ZoneCutFillCollection& ZoneCutFill();
    virtual const ZoneCutFillCollection& ZoneCutFill() const;
    virtual ZoneMaterialCollection& ZoneMaterial();
    virtual const ZoneMaterialCollection& ZoneMaterial() const;
    virtual ZoneCrossSectStructureCollection& ZoneCrossSectStructure();
    virtual const ZoneCrossSectStructureCollection& ZoneCrossSectStructure() const;
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
    
    virtual int getPriority() const;
    virtual void setPriority(int value);
    virtual bool hasValue_Priority() const;
    virtual void resetValue_Priority();
    
    virtual EnumZoneCategoryType::Values getCategory() const;
    virtual void setCategory(EnumZoneCategoryType::Values value);
    virtual bool hasValue_Category() const;
    virtual void resetValue_Category();
    
    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual double getStaEnd() const;
    virtual void setStaEnd(double value);
    virtual bool hasValue_StaEnd() const;
    virtual void resetValue_StaEnd();
    
    virtual double getStartWidth() const;
    virtual void setStartWidth(double value);
    virtual bool hasValue_StartWidth() const;
    virtual void resetValue_StartWidth();
    
    virtual double getStartVertValue() const;
    virtual void setStartVertValue(double value);
    virtual bool hasValue_StartVertValue() const;
    virtual void resetValue_StartVertValue();
    
    virtual EnumZoneVertType::Values getStartVertType() const;
    virtual void setStartVertType(EnumZoneVertType::Values value);
    virtual bool hasValue_StartVertType() const;
    virtual void resetValue_StartVertType();
    
    virtual double getEndWidth() const;
    virtual void setEndWidth(double value);
    virtual bool hasValue_EndWidth() const;
    virtual void resetValue_EndWidth();
    
    virtual double getEndVertValue() const;
    virtual void setEndVertValue(double value);
    virtual bool hasValue_EndVertValue() const;
    virtual void resetValue_EndVertValue();
    
    virtual EnumZoneVertType::Values getEndVertType() const;
    virtual void setEndVertType(EnumZoneVertType::Values value);
    virtual bool hasValue_EndVertType() const;
    virtual void resetValue_EndVertType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ZoneWidthCollection *m_ZoneWidth;
    ZoneSlopeCollection *m_ZoneSlope;
    ZoneCutFillCollection *m_ZoneCutFill;
    ZoneMaterialCollection *m_ZoneMaterial;
    ZoneCrossSectStructureCollection *m_ZoneCrossSectStructure;
    FeatureCollection *m_Feature;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    EnumStateType::Values m_State;
    bool m_bState_valueSet;
    int m_Priority;
    bool m_bPriority_valueSet;
    EnumZoneCategoryType::Values m_Category;
    bool m_bCategory_valueSet;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_StartWidth;
    bool m_bStartWidth_valueSet;
    double m_StartVertValue;
    bool m_bStartVertValue_valueSet;
    EnumZoneVertType::Values m_StartVertType;
    bool m_bStartVertType_valueSet;
    double m_EndWidth;
    bool m_bEndWidth_valueSet;
    double m_EndVertValue;
    bool m_bEndVertValue_valueSet;
    EnumZoneVertType::Values m_EndVertType;
    bool m_bEndVertType_valueSet;
};
}; // namespace : LX
#endif
