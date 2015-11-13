#if !defined(__DITCHTMPL_H)
#define __DITCHTMPL_H

#include "Ditch.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Ditch
template<class T>
class DitchTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DitchTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DitchTmpl ();
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
    
    virtual double getBottomWidth() const;
    virtual void setBottomWidth(double value);
    virtual bool hasValue_BottomWidth() const;
    virtual void resetValue_BottomWidth();
    
    virtual EnumDitchBottomShape::Values getBottomShape() const;
    virtual void setBottomShape(EnumDitchBottomShape::Values value);
    virtual bool hasValue_BottomShape() const;
    virtual void resetValue_BottomShape();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    double m_StaStart;
    bool m_bStaStart_valueSet;
    double m_StaEnd;
    bool m_bStaEnd_valueSet;
    double m_BottomWidth;
    bool m_bBottomWidth_valueSet;
    EnumDitchBottomShape::Values m_BottomShape;
    bool m_bBottomShape_valueSet;
};
}; // namespace : LX
#endif
