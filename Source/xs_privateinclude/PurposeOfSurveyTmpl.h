#if !defined(__PURPOSEOFSURVEYTMPL_H)
#define __PURPOSEOFSURVEYTMPL_H

#include "PurposeOfSurvey.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : PurposeOfSurvey
template<class T>
class PurposeOfSurveyTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PurposeOfSurveyTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PurposeOfSurveyTmpl ();
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
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
};
}; // namespace : LX
#endif
