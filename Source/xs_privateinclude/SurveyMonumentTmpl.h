#if !defined(__SURVEYMONUMENTTMPL_H)
#define __SURVEYMONUMENTTMPL_H

#include "SurveyMonument.h"
#include "LXTypesTmpl.h"

namespace LX
{

class Monument;
class FeatureCollection;

// Class : SurveyMonument
template<class T>
class SurveyMonumentTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    SurveyMonumentTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~SurveyMonumentTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual String getMntRef() const;
    virtual void setMntRef(String value);
    virtual bool hasValue_MntRef() const;
    virtual void resetValue_MntRef();
    
    virtual String getPurpose() const;
    virtual void setPurpose(String value);
    virtual bool hasValue_Purpose() const;
    virtual void resetValue_Purpose();
    
    virtual String getState() const;
    virtual void setState(String value);
    virtual bool hasValue_State() const;
    virtual void resetValue_State();
    
    virtual String getAdoptedSurvey() const;
    virtual void setAdoptedSurvey(String value);
    virtual bool hasValue_AdoptedSurvey() const;
    virtual void resetValue_AdoptedSurvey();
    
    virtual String getDisturbedMonument() const;
    virtual void setDisturbedMonument(String value);
    virtual bool hasValue_DisturbedMonument() const;
    virtual void resetValue_DisturbedMonument();
    
    virtual String getDisturbedDate() const;
    virtual void setDisturbedDate(String value);
    virtual bool hasValue_DisturbedDate() const;
    virtual void resetValue_DisturbedDate();
    
    virtual String getDisturbedAnnotation() const;
    virtual void setDisturbedAnnotation(String value);
    virtual bool hasValue_DisturbedAnnotation() const;
    virtual void resetValue_DisturbedAnnotation();
    
    virtual String getReplacedMonument() const;
    virtual void setReplacedMonument(String value);
    virtual bool hasValue_ReplacedMonument() const;
    virtual void resetValue_ReplacedMonument();
    
    virtual String getReplacedDate() const;
    virtual void setReplacedDate(String value);
    virtual bool hasValue_ReplacedDate() const;
    virtual void resetValue_ReplacedDate();
    
    virtual String getReplacedAnnotation() const;
    virtual void setReplacedAnnotation(String value);
    virtual bool hasValue_ReplacedAnnotation() const;
    virtual void resetValue_ReplacedAnnotation();
    

public:
	// Resolvers
    virtual Monument* resolveMntRef();
    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    String m_MntRef;
    bool m_bMntRef_valueSet;
    String m_Purpose;
    bool m_bPurpose_valueSet;
    String m_State;
    bool m_bState_valueSet;
    String m_AdoptedSurvey;
    bool m_bAdoptedSurvey_valueSet;
    String m_DisturbedMonument;
    bool m_bDisturbedMonument_valueSet;
    String m_DisturbedDate;
    bool m_bDisturbedDate_valueSet;
    String m_DisturbedAnnotation;
    bool m_bDisturbedAnnotation_valueSet;
    String m_ReplacedMonument;
    bool m_bReplacedMonument_valueSet;
    String m_ReplacedDate;
    bool m_bReplacedDate_valueSet;
    String m_ReplacedAnnotation;
    bool m_bReplacedAnnotation_valueSet;
};
}; // namespace : LX
#endif
