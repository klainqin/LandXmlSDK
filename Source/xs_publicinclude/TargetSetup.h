#if !defined(__TARGETSETUP_H)
#define __TARGETSETUP_H

#include "TargetSetup.h"
#include "LXTypes.h"

namespace LX
{

class FieldNoteCollection;
class FeatureCollection;

// Class : TargetSetup
class TargetSetup : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FieldNoteCollection& FieldNote() = 0;
    virtual const FieldNoteCollection& FieldNote() const = 0;
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getId() const = 0;
    virtual void setId(String value) = 0;
    virtual bool hasValue_Id() const = 0;
    virtual void resetValue_Id() = 0;
    
    virtual double getTargetHeight() const = 0;
    virtual void setTargetHeight(double value) = 0;
    virtual bool hasValue_TargetHeight() const = 0;
    virtual void resetValue_TargetHeight() = 0;
    
    virtual double getEdmTargetVertOffset() const = 0;
    virtual void setEdmTargetVertOffset(double value) = 0;
    virtual bool hasValue_EdmTargetVertOffset() const = 0;
    virtual void resetValue_EdmTargetVertOffset() = 0;
    
    virtual double getPrismConstant() const = 0;
    virtual void setPrismConstant(double value) = 0;
    virtual bool hasValue_PrismConstant() const = 0;
    virtual void resetValue_PrismConstant() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
