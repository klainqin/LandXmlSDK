#if !defined(__FEATUREDICTIONARYTMPL_H)
#define __FEATUREDICTIONARYTMPL_H

#include "FeatureDictionary.h"
#include "LXTypesTmpl.h"

namespace LX
{

class DocFileRefCollection;

// Class : FeatureDictionary
template<class T>
class FeatureDictionaryTmpl : public ObjectTmpl<T>, public IIdentifiable<String>
{

public:
	virtual void toXml (IStream& stream);
public:
	// Constructors
    FeatureDictionaryTmpl<T> (DocumentImpl* pDoc);

public:
	// Destructors
    virtual ~FeatureDictionaryTmpl ();
public:
	// Collections
    virtual DocFileRefCollection& DocFileRef();
    virtual const DocFileRefCollection& DocFileRef() const;

    virtual bool getObjectId(const String*& pId) const;
    virtual ValueObject* id () const;
    
public:
	// Properties

    virtual String getName() const;
    virtual void setName(String value);
    virtual bool hasValue_Name() const;
    virtual void resetValue_Name();
    
    virtual String getVersion() const;
    virtual void setVersion(String value);
    virtual bool hasValue_Version() const;
    virtual void resetValue_Version();
    

    virtual Object::ValidityEnum validate(IValidationEventSink *pEventSink) const;

protected:
    DocFileRefCollection *m_DocFileRef;
    String m_Name;
    bool m_bName_valueSet;
    String m_Version;
    bool m_bVersion_valueSet;
};
}; // namespace : LX
#endif
