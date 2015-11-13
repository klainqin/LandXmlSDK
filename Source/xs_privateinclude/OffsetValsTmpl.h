#if !defined(__OFFSETVALSTMPL_H)
#define __OFFSETVALSTMPL_H

#include "OffsetVals.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : OffsetVals
template<class T>
class OffsetValsTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    OffsetValsTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~OffsetValsTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getOffsetInOut() const;
    virtual void setOffsetInOut(double value);
    virtual bool hasValue_OffsetInOut() const;
    virtual void resetValue_OffsetInOut();
    
    virtual double getOffsetLeftRight() const;
    virtual void setOffsetLeftRight(double value);
    virtual bool hasValue_OffsetLeftRight() const;
    virtual void resetValue_OffsetLeftRight();
    
    virtual double getOffsetUpDown() const;
    virtual void setOffsetUpDown(double value);
    virtual bool hasValue_OffsetUpDown() const;
    virtual void resetValue_OffsetUpDown();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_OffsetInOut;
    bool m_bOffsetInOut_valueSet;
    double m_OffsetLeftRight;
    bool m_bOffsetLeftRight_valueSet;
    double m_OffsetUpDown;
    bool m_bOffsetUpDown_valueSet;
};
}; // namespace : LX
#endif
