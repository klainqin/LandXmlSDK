#if !defined(__TITLETMPL_H)
#define __TITLETMPL_H

#include "Title.h"
#include "LXTypesTmpl.h"

namespace LX
{


// Class : Title
template<class T>
class TitleTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    TitleTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~TitleTmpl ();
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
    
    virtual String getTitleType() const;
    virtual void setTitleType(String value);
    virtual bool hasValue_TitleType() const;
    virtual void resetValue_TitleType();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    String m_Name;
    bool m_bName_valueSet;
    String m_TitleType;
    bool m_bTitleType_valueSet;
};
}; // namespace : LX
#endif
