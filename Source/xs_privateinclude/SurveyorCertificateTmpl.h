#if !defined(__SURVEYORCERTIFICATETMPL_H)
#define __SURVEYORCERTIFICATETMPL_H

#include "SurveyorCertificate.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : SurveyorCertificate
template<class T>
class SurveyorCertificateTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurveyorCertificateTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurveyorCertificateTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getCertificateType() const;
    virtual void setCertificateType(String value);
    virtual bool hasValue_CertificateType() const;
    virtual void resetValue_CertificateType();
    
    virtual String getTextCertificate() const;
    virtual void setTextCertificate(String value);
    virtual bool hasValue_TextCertificate() const;
    virtual void resetValue_TextCertificate();
    
    virtual String getSurveyDate() const;
    virtual void setSurveyDate(String value);
    virtual bool hasValue_SurveyDate() const;
    virtual void resetValue_SurveyDate();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
    String m_CertificateType;
    bool m_bCertificateType_valueSet;
    String m_TextCertificate;
    bool m_bTextCertificate_valueSet;
    String m_SurveyDate;
    bool m_bSurveyDate_valueSet;
};
}; // namespace : LX
#endif
