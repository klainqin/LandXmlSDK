#if !defined(__AMENDMENTTMPL_H)
#define __AMENDMENTTMPL_H

#include "Amendment.h"
#include "LXTypesTmpl.h"

namespace LX
{

class AmendmentItemCollection;

// Class : Amendment
template<class T>
class AmendmentTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AmendmentTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AmendmentTmpl ();
public:
	// Collections
    virtual AmendmentItemCollection& AmendmentItem();
    virtual const AmendmentItemCollection& AmendmentItem() const;

public:
	// Properties

    virtual String getDealingNumber() const;
    virtual void setDealingNumber(String value);
    virtual bool hasValue_DealingNumber() const;
    virtual void resetValue_DealingNumber();
    
    virtual String getAmendmentDate() const;
    virtual void setAmendmentDate(String value);
    virtual bool hasValue_AmendmentDate() const;
    virtual void resetValue_AmendmentDate();
    
    virtual String getComments() const;
    virtual void setComments(String value);
    virtual bool hasValue_Comments() const;
    virtual void resetValue_Comments();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    AmendmentItemCollection *m_AmendmentItem;
    String m_DealingNumber;
    bool m_bDealingNumber_valueSet;
    String m_AmendmentDate;
    bool m_bAmendmentDate_valueSet;
    String m_Comments;
    bool m_bComments_valueSet;
};
}; // namespace : LX
#endif
