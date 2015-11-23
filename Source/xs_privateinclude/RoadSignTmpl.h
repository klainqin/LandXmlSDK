#if !defined(__ROADSIGNTMPL_H)
#define __ROADSIGNTMPL_H

#include "RoadSign.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : RoadSign
template<class T>
class RoadSignTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    RoadSignTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~RoadSignTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getMUTCDCode() const;
    virtual void setMUTCDCode(String value);
    virtual bool hasValue_MUTCDCode() const;
    virtual void resetValue_MUTCDCode();
    
    virtual double getStation() const;
    virtual void setStation(double value);
    virtual bool hasValue_Station() const;
    virtual void resetValue_Station();
    
    virtual double getOffset() const;
    virtual void setOffset(double value);
    virtual bool hasValue_Offset() const;
    virtual void resetValue_Offset();
    
    virtual EnumSideofRoadType::Values getSideofRoad() const;
    virtual void setSideofRoad(EnumSideofRoadType::Values value);
    virtual bool hasValue_SideofRoad() const;
    virtual void resetValue_SideofRoad();
    
    virtual EnumRoadSignType::Values getType() const;
    virtual void setType(EnumRoadSignType::Values value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    
    virtual double getMountHeight() const;
    virtual void setMountHeight(double value);
    virtual bool hasValue_MountHeight() const;
    virtual void resetValue_MountHeight();
    
    virtual double getWidth() const;
    virtual void setWidth(double value);
    virtual bool hasValue_Width() const;
    virtual void resetValue_Width();
    
    virtual double getHeight() const;
    virtual void setHeight(double value);
    virtual bool hasValue_Height() const;
    virtual void resetValue_Height();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_MUTCDCode;
    bool m_bMUTCDCode_valueSet;
    double m_Station;
    bool m_bStation_valueSet;
    double m_Offset;
    bool m_bOffset_valueSet;
    EnumSideofRoadType::Values m_SideofRoad;
    bool m_bSideofRoad_valueSet;
    EnumRoadSignType::Values m_Type;
    bool m_bType_valueSet;
    double m_MountHeight;
    bool m_bMountHeight_valueSet;
    double m_Width;
    bool m_bWidth_valueSet;
    double m_Height;
    bool m_bHeight_valueSet;
};
}; // namespace : LX
#endif
