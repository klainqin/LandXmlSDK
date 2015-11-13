#if !defined(__FEATUREDICTIONARY_H)
#define __FEATUREDICTIONARY_H

#include "FeatureDictionary.h"
#include "LXTypes.h"

namespace LX
{

class DocFileRefCollection;

// Class : FeatureDictionary
class FeatureDictionary : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual DocFileRefCollection& DocFileRef() = 0;
    virtual const DocFileRefCollection& DocFileRef() const = 0;

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    virtual String getVersion() const = 0;
    virtual void setVersion(String value) = 0;
    virtual bool hasValue_Version() const = 0;
    virtual void resetValue_Version() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
