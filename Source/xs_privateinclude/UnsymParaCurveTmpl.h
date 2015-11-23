#if !defined(__UNSYMPARACURVETMPL_H)
#define __UNSYMPARACURVETMPL_H

#include "UnsymParaCurve.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : UnsymParaCurve
template<class T>
class UnsymParaCurveTmpl : public DoubleCollectionTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    UnsymParaCurveTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~UnsymParaCurveTmpl ();
public:
	// Collections

public:
	// Properties

    virtual double getLengthIn() const;
    virtual void setLengthIn(double value);
    virtual bool hasValue_LengthIn() const;
    virtual void resetValue_LengthIn();
    
    virtual double getLengthOut() const;
    virtual void setLengthOut(double value);
    virtual bool hasValue_LengthOut() const;
    virtual void resetValue_LengthOut();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_LengthIn;
    bool m_bLengthIn_valueSet;
    double m_LengthOut;
    bool m_bLengthOut_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
};
}; // namespace : LX
#endif
