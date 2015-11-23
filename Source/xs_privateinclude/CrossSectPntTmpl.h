#if !defined(__CROSSSECTPNTTMPL_H)
#define __CROSSSECTPNTTMPL_H

#include "CrossSectPnt.h"
#include "LXTypesTmpl.h"
#include "PointTypeImpl.h"

namespace LX
{


// Class : CrossSectPnt
template<class T>
class CrossSectPntTmpl : public PointTypeTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CrossSectPntTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CrossSectPntTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual EnumDataFormatType::Values getDataFormat() const;
    virtual void setDataFormat(EnumDataFormatType::Values value);
    virtual bool hasValue_DataFormat() const;
    virtual void resetValue_DataFormat();
    
    virtual String getAlignRef() const;
    virtual void setAlignRef(String value);
    virtual bool hasValue_AlignRef() const;
    virtual void resetValue_AlignRef();
    
    virtual double getAlignRefStation() const;
    virtual void setAlignRefStation(double value);
    virtual bool hasValue_AlignRefStation() const;
    virtual void resetValue_AlignRefStation();
    
    virtual String getPlanFeatureRef() const;
    virtual void setPlanFeatureRef(String value);
    virtual bool hasValue_PlanFeatureRef() const;
    virtual void resetValue_PlanFeatureRef();
    
    virtual double getPlanFeatureRefStation() const;
    virtual void setPlanFeatureRefStation(double value);
    virtual bool hasValue_PlanFeatureRefStation() const;
    virtual void resetValue_PlanFeatureRefStation();
    
    virtual String getParcelRef() const;
    virtual void setParcelRef(String value);
    virtual bool hasValue_ParcelRef() const;
    virtual void resetValue_ParcelRef();
    
    virtual double getParcelRefStation() const;
    virtual void setParcelRefStation(double value);
    virtual bool hasValue_ParcelRefStation() const;
    virtual void resetValue_ParcelRefStation();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    EnumDataFormatType::Values m_DataFormat;
    bool m_bDataFormat_valueSet;
    String m_AlignRef;
    bool m_bAlignRef_valueSet;
    double m_AlignRefStation;
    bool m_bAlignRefStation_valueSet;
    String m_PlanFeatureRef;
    bool m_bPlanFeatureRef_valueSet;
    double m_PlanFeatureRefStation;
    bool m_bPlanFeatureRefStation_valueSet;
    String m_ParcelRef;
    bool m_bParcelRef_valueSet;
    double m_ParcelRefStation;
    bool m_bParcelRefStation_valueSet;
};
}; // namespace : LX
#endif
