#if !defined(__ZONEWIDTHTMPL_H)
#define __ZONEWIDTHTMPL_H

#include "ZoneWidth.h"
#include "LXTypesTmpl.h"

namespace LX
{

class FeatureCollection;

// Class : ZoneWidth
template<class T>
class ZoneWidthTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneWidthTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneWidthTmpl ();
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
    
    virtual double getStartWidth() const;
    virtual void setStartWidth(double value);
    virtual bool hasValue_StartWidth() const;
    virtual void resetValue_StartWidth();
    
    virtual double getEndWidth() const;
    virtual void setEndWidth(double value);
    virtual bool hasValue_EndWidth() const;
    virtual void resetValue_EndWidth();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    FeatureCollection *m_Feature;
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_StartWidth;
    bool m_bStartWidth_valueSet;
    double m_EndWidth;
    bool m_bEndWidth_valueSet;
};
}; // namespace : LX
#endif
