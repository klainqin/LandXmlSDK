#if !defined(__SURVEYORCERTIFICATE_H)
#define __SURVEYORCERTIFICATE_H

#include "SurveyorCertificate.h"
#include "LXTypes.h"

namespace LX
{


// Class : SurveyorCertificate
class SurveyorCertificate : public Object
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
    
    virtual String getCertificateType() const = 0;
    virtual void setCertificateType(String value) = 0;
    virtual bool hasValue_CertificateType() const = 0;
    virtual void resetValue_CertificateType() = 0;
    
    virtual String getTextCertificate() const = 0;
    virtual void setTextCertificate(String value) = 0;
    virtual bool hasValue_TextCertificate() const = 0;
    virtual void resetValue_TextCertificate() = 0;
    
    virtual String getSurveyDate() const = 0;
    virtual void setSurveyDate(String value) = 0;
    virtual bool hasValue_SurveyDate() const = 0;
    virtual void resetValue_SurveyDate() = 0;
    
    
protected:
};
}; // namespace : LX
#endif
