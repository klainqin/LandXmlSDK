#if !defined(__HAZARDRATINGTMPL_H)
#define __HAZARDRATINGTMPL_H

#include "HazardRating.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : HazardRating
template<class T>
class HazardRatingTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    HazardRatingTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~HazardRatingTmpl ();
public:
	// Collections

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
    
    virtual int getRating() const;
    virtual void setRating(int value);
    virtual bool hasValue_Rating() const;
    virtual void resetValue_Rating();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    int m_Rating;
    bool m_bRating_valueSet;
};
}; // namespace : LX
#endif
