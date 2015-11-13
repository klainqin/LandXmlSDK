#if !defined(__FEATURE_H)
#define __FEATURE_H

#include "Feature.h"
#include "LXTypes.h"

namespace LX
{

class PropertyCollection;
class DocFileRefCollection;

// Class : Feature
class Feature : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual PropertyCollection& Property() = 0;
    virtual const PropertyCollection& Property() const = 0;
    virtual DocFileRefCollection& DocFileRef() = 0;
    virtual const DocFileRefCollection& DocFileRef() const = 0;

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getCode() const = 0;
    virtual void setCode(String value) = 0;
    virtual bool hasValue_Code() const = 0;
    virtual void resetValue_Code() = 0;
    
    virtual String getSource() const = 0;
    virtual void setSource(String value) = 0;
    virtual bool hasValue_Source() const = 0;
    virtual void resetValue_Source() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
