#if !defined(__AMENDMENTITEMTMPL_H)
#define __AMENDMENTITEMTMPL_H

#include "AmendmentItem.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : AmendmentItem
template<class T>
class AmendmentItemTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AmendmentItemTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AmendmentItemTmpl ();
public:
	// Collections

public:
	// Properties

    virtual String getElementName() const;
    virtual void setElementName(String value);
    virtual bool hasValue_ElementName() const;
    virtual void resetValue_ElementName();
    
    virtual String getOldName() const;
    virtual void setOldName(String value);
    virtual bool hasValue_OldName() const;
    virtual void resetValue_OldName();
    
    virtual String getNewName() const;
    virtual void setNewName(String value);
    virtual bool hasValue_NewName() const;
    virtual void resetValue_NewName();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_ElementName;
    bool m_bElementName_valueSet;
    String m_OldName;
    bool m_bOldName_valueSet;
    String m_NewName;
    bool m_bNewName_valueSet;
};
}; // namespace : LX
#endif
