#if !defined(__PURPOSEOFSURVEY_H)
#define __PURPOSEOFSURVEY_H

#include "PurposeOfSurvey.h"
#include "LXTypes.h"

namespace LX
{


// Class : PurposeOfSurvey
class PurposeOfSurvey : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections

public:
	// Properties
    
    virtual String getName() const = 0;
    virtual void setName(String value) = 0;
    virtual bool hasValue_Name() const = 0;
    virtual void resetValue_Name() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
