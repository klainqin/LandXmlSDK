#if !defined(__DOCFILEREFTMPL_H)
#define __DOCFILEREFTMPL_H

#include "DocFileRef.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : DocFileRef
template<class T>
class DocFileRefTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    DocFileRefTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~DocFileRefTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getLocation() const;
    virtual void setLocation(String value);
    virtual bool hasValue_Location() const;
    virtual void resetValue_Location();
    
    virtual String getFileType() const;
    virtual void setFileType(String value);
    virtual bool hasValue_FileType() const;
    virtual void resetValue_FileType();
    
    virtual String getFileFormat() const;
    virtual void setFileFormat(String value);
    virtual bool hasValue_FileFormat() const;
    virtual void resetValue_FileFormat();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
    String m_Location;
    bool m_bLocation_valueSet;
    String m_FileType;
    bool m_bFileType_valueSet;
    String m_FileFormat;
    bool m_bFileFormat_valueSet;
};
}; // namespace : LX
#endif
