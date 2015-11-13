#if !defined(__LOCATIONADDRESSTMPL_H)
#define __LOCATIONADDRESSTMPL_H

#include "LocationAddress.h"
#include "LXTypesTmpl.h"

namespace LX
{

class ComplexNameCollection;
class RoadNameCollection;
class AdministrativeAreaCollection;
class AddressPointCollection;

// Class : LocationAddress
template<class T>
class LocationAddressTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    LocationAddressTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~LocationAddressTmpl ();
public:
	// Collections
    virtual ComplexNameCollection& ComplexName();
    virtual const ComplexNameCollection& ComplexName() const;
    virtual RoadNameCollection& RoadName();
    virtual const RoadNameCollection& RoadName() const;
    virtual AdministrativeAreaCollection& AdministrativeArea();
    virtual const AdministrativeAreaCollection& AdministrativeArea() const;
    virtual AddressPointCollection& AddressPoint();
    virtual const AddressPointCollection& AddressPoint() const;

public:
	// Properties

    virtual String getAddressType() const;
    virtual void setAddressType(String value);
    virtual bool hasValue_AddressType() const;
    virtual void resetValue_AddressType();
    
    virtual String getFlatType() const;
    virtual void setFlatType(String value);
    virtual bool hasValue_FlatType() const;
    virtual void resetValue_FlatType();
    
    virtual String getFlatNumber() const;
    virtual void setFlatNumber(String value);
    virtual bool hasValue_FlatNumber() const;
    virtual void resetValue_FlatNumber();
    
    virtual String getFloorLevelType() const;
    virtual void setFloorLevelType(String value);
    virtual bool hasValue_FloorLevelType() const;
    virtual void resetValue_FloorLevelType();
    
    virtual String getFloorLevelNumber() const;
    virtual void setFloorLevelNumber(String value);
    virtual bool hasValue_FloorLevelNumber() const;
    virtual void resetValue_FloorLevelNumber();
    
    virtual int getNumberFirst() const;
    virtual void setNumberFirst(int value);
    virtual bool hasValue_NumberFirst() const;
    virtual void resetValue_NumberFirst();
    
    virtual String getNumberSuffixFirst() const;
    virtual void setNumberSuffixFirst(String value);
    virtual bool hasValue_NumberSuffixFirst() const;
    virtual void resetValue_NumberSuffixFirst();
    
    virtual int getNumberLast() const;
    virtual void setNumberLast(int value);
    virtual bool hasValue_NumberLast() const;
    virtual void resetValue_NumberLast();
    
    virtual String getNumberSuffixLast() const;
    virtual void setNumberSuffixLast(String value);
    virtual bool hasValue_NumberSuffixLast() const;
    virtual void resetValue_NumberSuffixLast();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    ComplexNameCollection *m_ComplexName;
    RoadNameCollection *m_RoadName;
    AdministrativeAreaCollection *m_AdministrativeArea;
    AddressPointCollection *m_AddressPoint;
    String m_AddressType;
    bool m_bAddressType_valueSet;
    String m_FlatType;
    bool m_bFlatType_valueSet;
    String m_FlatNumber;
    bool m_bFlatNumber_valueSet;
    String m_FloorLevelType;
    bool m_bFloorLevelType_valueSet;
    String m_FloorLevelNumber;
    bool m_bFloorLevelNumber_valueSet;
    int m_NumberFirst;
    bool m_bNumberFirst_valueSet;
    String m_NumberSuffixFirst;
    bool m_bNumberSuffixFirst_valueSet;
    int m_NumberLast;
    bool m_bNumberLast_valueSet;
    String m_NumberSuffixLast;
    bool m_bNumberSuffixLast_valueSet;
};
}; // namespace : LX
#endif
