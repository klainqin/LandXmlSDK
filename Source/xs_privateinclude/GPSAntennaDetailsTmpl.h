#if !defined(__GPSANTENNADETAILSTMPL_H)
#define __GPSANTENNADETAILSTMPL_H

#include "GPSAntennaDetails.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : GPSAntennaDetails
template<class T>
class GPSAntennaDetailsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    GPSAntennaDetailsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~GPSAntennaDetailsTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
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
    
    virtual double getLatitude() const;
    virtual void setLatitude(double value);
    virtual bool hasValue_Latitude() const;
    virtual void resetValue_Latitude();
    
    virtual double getLongitude() const;
    virtual void setLongitude(double value);
    virtual bool hasValue_Longitude() const;
    virtual void resetValue_Longitude();
    
    virtual double getAltitude() const;
    virtual void setAltitude(double value);
    virtual bool hasValue_Altitude() const;
    virtual void resetValue_Altitude();
    
    virtual double getEllipsiodalHeight() const;
    virtual void setEllipsiodalHeight(double value);
    virtual bool hasValue_EllipsiodalHeight() const;
    virtual void resetValue_EllipsiodalHeight();
    
    virtual double getOrthometricHeight() const;
    virtual void setOrthometricHeight(double value);
    virtual bool hasValue_OrthometricHeight() const;
    virtual void resetValue_OrthometricHeight();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Id;
    bool m_bId_valueSet;
    String m_Manufacturer;
    bool m_bManufacturer_valueSet;
    String m_Model;
    bool m_bModel_valueSet;
    String m_SerialNumber;
    bool m_bSerialNumber_valueSet;
    double m_Latitude;
    bool m_bLatitude_valueSet;
    double m_Longitude;
    bool m_bLongitude_valueSet;
    double m_Altitude;
    bool m_bAltitude_valueSet;
    double m_EllipsiodalHeight;
    bool m_bEllipsiodalHeight_valueSet;
    double m_OrthometricHeight;
    bool m_bOrthometricHeight_valueSet;
};
}; // namespace : LX
#endif
