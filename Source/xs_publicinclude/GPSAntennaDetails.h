#if !defined(__GPSANTENNADETAILS_H)
#define __GPSANTENNADETAILS_H

#include "GPSAntennaDetails.h"
#include "LXTypes.h"

namespace LX
{


// Class : GPSAntennaDetails
class GPSAntennaDetails : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual String getManufacturer() const = 0;
    virtual void setManufacturer(String value) = 0;
    virtual bool hasValue_Manufacturer() const = 0;
    virtual void resetValue_Manufacturer() = 0;
    
    virtual String getModel() const = 0;
    virtual void setModel(String value) = 0;
    virtual bool hasValue_Model() const = 0;
    virtual void resetValue_Model() = 0;
    
    virtual String getSerialNumber() const = 0;
    virtual void setSerialNumber(String value) = 0;
    virtual bool hasValue_SerialNumber() const = 0;
    virtual void resetValue_SerialNumber() = 0;
    
    virtual double getLatitude() const = 0;
    virtual void setLatitude(double value) = 0;
    virtual bool hasValue_Latitude() const = 0;
    virtual void resetValue_Latitude() = 0;
    
    virtual double getLongitude() const = 0;
    virtual void setLongitude(double value) = 0;
    virtual bool hasValue_Longitude() const = 0;
    virtual void resetValue_Longitude() = 0;
    
    virtual double getAltitude() const = 0;
    virtual void setAltitude(double value) = 0;
    virtual bool hasValue_Altitude() const = 0;
    virtual void resetValue_Altitude() = 0;
    
    virtual double getEllipsiodalHeight() const = 0;
    virtual void setEllipsiodalHeight(double value) = 0;
    virtual bool hasValue_EllipsiodalHeight() const = 0;
    virtual void resetValue_EllipsiodalHeight() = 0;
    
    virtual double getOrthometricHeight() const = 0;
    virtual void setOrthometricHeight(double value) = 0;
    virtual bool hasValue_OrthometricHeight() const = 0;
    virtual void resetValue_OrthometricHeight() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
