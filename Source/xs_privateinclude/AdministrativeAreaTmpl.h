#if !defined(__ADMINISTRATIVEAREATMPL_H)
#define __ADMINISTRATIVEAREATMPL_H

#include "AdministrativeArea.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : AdministrativeArea
template<class T>
class AdministrativeAreaTmpl : public ObjectTmpl<T>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AdministrativeAreaTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AdministrativeAreaTmpl ();
public:
	// Collections

public:
	// Properties
    virtual StringCollection* getPclRef() const;
    virtual void setPclRef(StringCollection* value);


    virtual String getAdminAreaType() const;
    virtual void setAdminAreaType(String value);
    virtual bool hasValue_AdminAreaType() const;
    virtual void resetValue_AdminAreaType();
    
    virtual String getAdminAreaName() const;
    virtual void setAdminAreaName(String value);
    virtual bool hasValue_AdminAreaName() const;
    virtual void resetValue_AdminAreaName();
    
    virtual String getAdminAreaCode() const;
    virtual void setAdminAreaCode(String value);
    virtual bool hasValue_AdminAreaCode() const;
    virtual void resetValue_AdminAreaCode();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_AdminAreaType;
    bool m_bAdminAreaType_valueSet;
    String m_AdminAreaName;
    bool m_bAdminAreaName_valueSet;
    String m_AdminAreaCode;
    bool m_bAdminAreaCode_valueSet;
    StringCollection *m_PclRef;
};
}; // namespace : LX
#endif
