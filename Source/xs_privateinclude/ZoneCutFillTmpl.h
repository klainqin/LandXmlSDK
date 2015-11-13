#if !defined(__ZONECUTFILLTMPL_H)
#define __ZONECUTFILLTMPL_H

#include "ZoneCutFill.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ZoneCutFill
template<class T>
class ZoneCutFillTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ZoneCutFillTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ZoneCutFillTmpl ();
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
    
    virtual double getCutSlope() const;
    virtual void setCutSlope(double value);
    virtual bool hasValue_CutSlope() const;
    virtual void resetValue_CutSlope();
    
    virtual double getFillSlope() const;
    virtual void setFillSlope(double value);
    virtual bool hasValue_FillSlope() const;
    virtual void resetValue_FillSlope();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_CutSlope;
    bool m_bCutSlope_valueSet;
    double m_FillSlope;
    bool m_bFillSlope_valueSet;
};
}; // namespace : LX
#endif
