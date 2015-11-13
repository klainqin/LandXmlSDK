#if !defined(__INSTRUMENTDETAILS_H)
#define __INSTRUMENTDETAILS_H

#include "InstrumentDetails.h"
#include "LXTypes.h"

namespace LX
{

class Corrections;

// Class : InstrumentDetails
class InstrumentDetails : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    virtual Corrections* getCorrections() const = 0;
    virtual void setCorrections(Corrections* value) = 0;
    
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual double getEdmAccuracyConstant() const = 0;
    virtual void setEdmAccuracyConstant(double value) = 0;
    virtual bool hasValue_EdmAccuracyConstant() const = 0;
    virtual void resetValue_EdmAccuracyConstant() = 0;
    
    virtual double getEdmAccuracyppm() const = 0;
    virtual void setEdmAccuracyppm(double value) = 0;
    virtual bool hasValue_EdmAccuracyppm() const = 0;
    virtual void resetValue_EdmAccuracyppm() = 0;
    
    virtual double getEdmVertOffset() const = 0;
    virtual void setEdmVertOffset(double value) = 0;
    virtual bool hasValue_EdmVertOffset() const = 0;
    virtual void resetValue_EdmVertOffset() = 0;
    
    virtual double getHorizAnglePrecision() const = 0;
    virtual void setHorizAnglePrecision(double value) = 0;
    virtual bool hasValue_HorizAnglePrecision() const = 0;
    virtual void resetValue_HorizAnglePrecision() = 0;
    
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
    
    virtual double getZenithAnglePrecision() const = 0;
    virtual void setZenithAnglePrecision(double value) = 0;
    virtual bool hasValue_ZenithAnglePrecision() const = 0;
    virtual void resetValue_ZenithAnglePrecision() = 0;
    
    virtual double getCarrierWavelength() const = 0;
    virtual void setCarrierWavelength(double value) = 0;
    virtual bool hasValue_CarrierWavelength() const = 0;
    virtual void resetValue_CarrierWavelength() = 0;
    
    virtual double getRefractiveIndex() const = 0;
    virtual void setRefractiveIndex(double value) = 0;
    virtual bool hasValue_RefractiveIndex() const = 0;
    virtual void resetValue_RefractiveIndex() = 0;
    
    virtual double getHorizCollimation() const = 0;
    virtual void setHorizCollimation(double value) = 0;
    virtual bool hasValue_HorizCollimation() const = 0;
    virtual void resetValue_HorizCollimation() = 0;
    
    virtual double getVertCollimation() const = 0;
    virtual void setVertCollimation(double value) = 0;
    virtual bool hasValue_VertCollimation() const = 0;
    virtual void resetValue_VertCollimation() = 0;
    
    virtual double getStadiaFactor() const = 0;
    virtual void setStadiaFactor(double value) = 0;
    virtual bool hasValue_StadiaFactor() const = 0;
    virtual void resetValue_StadiaFactor() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
