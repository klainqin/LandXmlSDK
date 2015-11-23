#if !defined(__ANNOTATIONTMPL_H)
#define __ANNOTATIONTMPL_H

#include "Annotation.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Annotation
template<class T>
class AnnotationTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    AnnotationTmpl (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~AnnotationTmpl ();
public:
	// Collections

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties
    virtual StringCollection* getPclRef() const;
    virtual void setPclRef(StringCollection* value);


    virtual String getType() const;
    virtual void setType(String value);
    virtual bool hasValue_Type() const;
    virtual void resetValue_Type();
    
    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getDesc() const;
    virtual void setDesc(String value);
    virtual bool hasValue_Desc() const;
    virtual void resetValue_Desc();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Type;
    bool m_bType_valueSet;
    String m_Name;
    bool m_bName_valueSet;
    String m_Desc;
    bool m_bDesc_valueSet;
    StringCollection *m_PclRef;
};
}; // namespace : LX
#endif
