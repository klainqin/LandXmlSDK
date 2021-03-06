#if !defined(__LASERDETAILSTMPL_H)
#define __LASERDETAILSTMPL_H

#include "LaserDetails.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : LaserDetails
template<class T>
class LaserDetailsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    LaserDetailsTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~LaserDetailsTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual double getLaserVertOffset() const;
    virtual void setLaserVertOffset(double value);
    virtual bool hasValue_LaserVertOffset() const;
    virtual void resetValue_LaserVertOffset();
    
    virtual String getManufacturer() const;
    virtual void setManufacturer(String value);
    virtual bool hasValue_Manufacturer() const;
    virtual void resetValue_Manufacturer();
    
    virtual String getModel() const;
    virtual void setModel(String value);
    virtual bool hasValue_Model() const;
    virtual void resetValue_Model();
    
    virtual String getSerialNumber() const;
    virtual void setSerialNumber(String value);
    virtual bool hasValue_SerialNumber() const;
    virtual void resetValue_SerialNumber();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Id;
    bool m_bId_valueSet;
    double m_LaserVertOffset;
    bool m_bLaserVertOffset_valueSet;
    String m_Manufacturer;
    bool m_bManufacturer_valueSet;
    String m_Model;
    bool m_bModel_valueSet;
    String m_SerialNumber;
    bool m_bSerialNumber_valueSet;
};
}; // namespace : LX
#endif
