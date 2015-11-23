#if !defined(__CLASSIFICATIONTMPL_H)
#define __CLASSIFICATIONTMPL_H

#include "Classification.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : Classification
template<class T>
class ClassificationTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ClassificationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ClassificationTmpl ();
public:
	// Collections
    virtual FeatureCollection& Feature();
    virtual const FeatureCollection& Feature() const;

public:
	// Properties

    virtual double getStaStart() const;
    virtual void setStaStart(double value);
    virtual bool hasValue_StaStart() const;
    virtual void resetValue_StaStart();
    
    virtual double getStaEnd() const;
    virtual void setStaEnd(double value);
    virtual bool hasValue_StaEnd() const;
    virtual void resetValue_StaEnd();
    
    virtual EnumFunctionalClassType::Values getFunctionalClass() const;
    virtual void setFunctionalClass(EnumFunctionalClassType::Values value);
    virtual bool hasValue_FunctionalClass() const;
    virtual void resetValue_FunctionalClass();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumFunctionalClassType::Values m_FunctionalClass;
    bool m_bFunctionalClass_valueSet;
};
}; // namespace : LX
#endif
