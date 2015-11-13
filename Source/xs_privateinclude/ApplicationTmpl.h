#if !defined(__APPLICATIONTMPL_H)
#define __APPLICATIONTMPL_H

#include "Application.h"
#include "LXTypesTmpl.h"

namespace LX
{

class AuthorCollection;

// Class : Application
template<class T>
class ApplicationTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    ApplicationTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~ApplicationTmpl ();
public:
	// Collections
    virtual AuthorCollection& Author();
    virtual const AuthorCollection& Author() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    
    virtual String getManufacturer() const;
    virtual void setManufacturer(String value);
    virtual bool hasValue_Manufacturer() const;
    virtual void resetValue_Manufacturer();
    
    virtual String getVersion() const;
    virtual void setVersion(String value);
    virtual bool hasValue_Version() const;
    virtual void resetValue_Version();
    
    virtual String getManufacturerURL() const;
    virtual void setManufacturerURL(String value);
    virtual bool hasValue_ManufacturerURL() const;
    virtual void resetValue_ManufacturerURL();
    
    virtual String getTimeStamp() const;
    virtual void setTimeStamp(String value);
    virtual bool hasValue_TimeStamp() const;
    virtual void resetValue_TimeStamp();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    AuthorCollection *m_Author;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    String m_Manufacturer;
    bool m_bManufacturer_valueSet;
    String m_Version;
    bool m_bVersion_valueSet;
    String m_ManufacturerURL;
    bool m_bManufacturerURL_valueSet;
    String m_TimeStamp;
    bool m_bTimeStamp_valueSet;
};
}; // namespace : LX
#endif
