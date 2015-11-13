#if !defined(__GPSRECEIVERDETAILS_H)
#define __GPSRECEIVERDETAILS_H

#include "GPSReceiverDetails.h"
#include "LXTypes.h"

namespace LX
{


// Class : GPSReceiverDetails
class GPSReceiverDetails : public Object
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
    
    
protected:
};
}; // namespace : LX
#endif
