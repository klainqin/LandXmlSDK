#if !defined(__INSTRUMENTDETAILSTMPL_H)
#define __INSTRUMENTDETAILSTMPL_H

#include "InstrumentDetails.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Corrections;

// Class : InstrumentDetails
template<class T>
class InstrumentDetailsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    InstrumentDetailsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~InstrumentDetailsTmpl ();
public:
	// Collections

public:
	// Properties
    virtual Corrections* getCorrections() const;
    virtual void setCorrections(Corrections* value);


    virtual String getId() const;
    virtual void setId(String value);
    virtual bool hasValue_Id() const;
    virtual void resetValue_Id();
    
    virtual double getEdmAccuracyConstant() const;
    virtual void setEdmAccuracyConstant(double value);
    virtual bool hasValue_EdmAccuracyConstant() const;
    virtual void resetValue_EdmAccuracyConstant();
    
    virtual double getEdmAccuracyppm() const;
    virtual void setEdmAccuracyppm(double value);
    virtual bool hasValue_EdmAccuracyppm() const;
    virtual void resetValue_EdmAccuracyppm();
    
    virtual double getEdmVertOffset() const;
    virtual void setEdmVertOffset(double value);
    virtual bool hasValue_EdmVertOffset() const;
    virtual void resetValue_EdmVertOffset();
    
    virtual double getHorizAnglePrecision() const;
    virtual void setHorizAnglePrecision(double value);
    virtual bool hasValue_HorizAnglePrecision() const;
    virtual void resetValue_HorizAnglePrecision();
    
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
    
    virtual double getZenithAnglePrecision() const;
    virtual void setZenithAnglePrecision(double value);
    virtual bool hasValue_ZenithAnglePrecision() const;
    virtual void resetValue_ZenithAnglePrecision();
    
    virtual double getCarrierWavelength() const;
    virtual void setCarrierWavelength(double value);
    virtual bool hasValue_CarrierWavelength() const;
    virtual void resetValue_CarrierWavelength();
    
    virtual double getRefractiveIndex() const;
    virtual void setRefractiveIndex(double value);
    virtual bool hasValue_RefractiveIndex() const;
    virtual void resetValue_RefractiveIndex();
    
    virtual double getHorizCollimation() const;
    virtual void setHorizCollimation(double value);
    virtual bool hasValue_HorizCollimation() const;
    virtual void resetValue_HorizCollimation();
    
    virtual double getVertCollimation() const;
    virtual void setVertCollimation(double value);
    virtual bool hasValue_VertCollimation() const;
    virtual void resetValue_VertCollimation();
    
    virtual double getStadiaFactor() const;
    virtual void setStadiaFactor(double value);
    virtual bool hasValue_StadiaFactor() const;
    virtual void resetValue_StadiaFactor();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    Corrections *m_Corrections;
    String m_Id;
    bool m_bId_valueSet;
    double m_EdmAccuracyConstant;
    bool m_bEdmAccuracyConstant_valueSet;
    double m_EdmAccuracyppm;
    bool m_bEdmAccuracyppm_valueSet;
    double m_EdmVertOffset;
    bool m_bEdmVertOffset_valueSet;
    double m_HorizAnglePrecision;
    bool m_bHorizAnglePrecision_valueSet;
    String m_Manufacturer;
    bool m_bManufacturer_valueSet;
    String m_Model;
    bool m_bModel_valueSet;
    String m_SerialNumber;
    bool m_bSerialNumber_valueSet;
    double m_ZenithAnglePrecision;
    bool m_bZenithAnglePrecision_valueSet;
    double m_CarrierWavelength;
    bool m_bCarrierWavelength_valueSet;
    double m_RefractiveIndex;
    bool m_bRefractiveIndex_valueSet;
    double m_HorizCollimation;
    bool m_bHorizCollimation_valueSet;
    double m_VertCollimation;
    bool m_bVertCollimation_valueSet;
    double m_StadiaFactor;
    bool m_bStadiaFactor_valueSet;
};
}; // namespace : LX
#endif
