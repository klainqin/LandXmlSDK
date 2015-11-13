#if !defined(__COMPLEXNAMETMPL_H)
#define __COMPLEXNAMETMPL_H

#include "ComplexName.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : ComplexName
template<class T>
class ComplexNameTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ComplexNameTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ComplexNameTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual int getPriority() const;
    virtual void setPriority(int value);
    virtual bool hasValue_Priority() const;
    virtual void resetValue_Priority();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Desc;
    bool m_bDesc_valueSet;
    int m_Priority;
    bool m_bPriority_valueSet;
};
}; // namespace : LX
#endif
