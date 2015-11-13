#if !defined(__SURVEYMONUMENT_H)
#define __SURVEYMONUMENT_H

#include "SurveyMonument.h"
#include "LXTypes.h"

namespace LX
{

class Monument;
class FeatureCollection;

// Class : SurveyMonument
class SurveyMonument : public Object
{

public:
	virtual void toXml (IStream& stream) = 0;
public:
	// Collections
    virtual FeatureCollection& Feature() = 0;
    virtual const FeatureCollection& Feature() const = 0;

public:
	// Properties
    
    virtual String getMntRef() const = 0;
    virtual void setMntRef(String value) = 0;
    virtual bool hasValue_MntRef() const = 0;
    virtual void resetValue_MntRef() = 0;
    
    virtual String getPurpose() const = 0;
    virtual void setPurpose(String value) = 0;
    virtual bool hasValue_Purpose() const = 0;
    virtual void resetValue_Purpose() = 0;
    
    virtual String getState() const = 0;
    virtual void setState(String value) = 0;
    virtual bool hasValue_State() const = 0;
    virtual void resetValue_State() = 0;
    
    virtual String getAdoptedSurvey() const = 0;
    virtual void setAdoptedSurvey(String value) = 0;
    virtual bool hasValue_AdoptedSurvey() const = 0;
    virtual void resetValue_AdoptedSurvey() = 0;
    
    virtual String getDisturbedMonument() const = 0;
    virtual void setDisturbedMonument(String value) = 0;
    virtual bool hasValue_DisturbedMonument() const = 0;
    virtual void resetValue_DisturbedMonument() = 0;
    
    virtual String getDisturbedDate() const = 0;
    virtual void setDisturbedDate(String value) = 0;
    virtual bool hasValue_DisturbedDate() const = 0;
    virtual void resetValue_DisturbedDate() = 0;
    
    virtual String getDisturbedAnnotation() const = 0;
    virtual void setDisturbedAnnotation(String value) = 0;
    virtual bool hasValue_DisturbedAnnotation() const = 0;
    virtual void resetValue_DisturbedAnnotation() = 0;
    
    virtual String getReplacedMonument() const = 0;
    virtual void setReplacedMonument(String value) = 0;
    virtual bool hasValue_ReplacedMonument() const = 0;
    virtual void resetValue_ReplacedMonument() = 0;
    
    virtual String getReplacedDate() const = 0;
    virtual void setReplacedDate(String value) = 0;
    virtual bool hasValue_ReplacedDate() const = 0;
    virtual void resetValue_ReplacedDate() = 0;
    
    virtual String getReplacedAnnotation() const = 0;
    virtual void setReplacedAnnotation(String value) = 0;
    virtual bool hasValue_ReplacedAnnotation() const = 0;
    virtual void resetValue_ReplacedAnnotation() = 0;
    
    
public:
	// Resolvers
    virtual Monument* resolveMntRef() = 0;
protected:
};
}; // namespace : LX
#endif
