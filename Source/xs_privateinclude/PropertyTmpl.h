#if !defined(__PROPERTYTMPL_H)
#define __PROPERTYTMPL_H

#include "Property.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Property
template<class T>
class PropertyTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    PropertyTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~PropertyTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getLabel() const;
    virtual void setLabel(String value);
    virtual bool hasValue_Label() const;
    virtual void resetValue_Label();
    
    virtual String getValue() const;
    virtual void setValue(String value);
    virtual bool hasValue_Value() const;
    virtual void resetValue_Value();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Label;
    bool m_bLabel_valueSet;
    String m_Value;
    bool m_bValue_valueSet;
};
}; // namespace : LX
#endif
