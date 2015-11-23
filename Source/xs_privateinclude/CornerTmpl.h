#if !defined(__CORNERTMPL_H)
#define __CORNERTMPL_H

#include "Corner.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Corner
template<class T>
class CornerTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    CornerTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~CornerTmpl ();
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
    
    virtual EnumCornerType::Values getType() const;
    virtual void setType(EnumCornerType::Values value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    EnumCornerType::Values m_Type;
    bool m_bType_valueSet;
};
}; // namespace : LX
#endif
